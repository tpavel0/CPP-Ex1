#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;
#include <string>
#include <iostream>
using namespace std;

TEST_CASE("test") {
	string text = "One day you will see this dayer";
	CHECK(find(text, "Une") == string("One"));
	CHECK(find(text, "tai") == string("day"));
	CHECK(find(text, "yuo") == string("you"));
	CHECK(find(text, "wyll") == string("will"));
	CHECK(find(text, "Zee") == string("see"));
	CHECK_THROWS_AS(find(text, "Die"), std::exception);
	CHECK_THROWS_AS(find(text, "hard"), std::exception);
	CHECK_THROWS_AS(find(text, "ten"), std::exception);
}

TEST_CASE("Test replacement of v and w") { //14
    string text = "we want to vin and be vinners";
    CHECK(find(text, "We") == string("we"));
    CHECK(find(text, "ve") == string("we"));
    CHECK(find(text, "vant") == string("want"));
    CHECK(find(text, "Want") == string("want"));
    CHECK(find(text, "win") == string("vin"));
    CHECK(find(text, "Win") == string("vin"));
    CHECK(find(text, "Winners") == string("vinners"));
    CHECK(find(text, "winners") == string("vinners"));
    CHECK(find(text, "Be") == string("be"));
    CHECK(find(text, "Ve") == string("we"));
    CHECK(find(text, "Vin") == string("vin"));
    CHECK_THROWS_AS(find(text, "won"), std::exception);
    CHECK_THROWS_AS(find(text, "waanted"), std::exception);
    CHECK_THROWS_AS(find(text, "been"), std::exception);
}

TEST_CASE("Test replacement of b and f") { // 12
    string text = "bebore sun rise and all still flack abter shinny";
    CHECK(find(text, "before") == string("bebore"));
    CHECK(find(text, "Before") == string("bebore"));
    CHECK(find(text, "black") == string("flack"));
    CHECK(find(text, "Black") == string("flack"));
    CHECK(find(text, "after") == string("abter"));
    CHECK(find(text, "After") == string("abter"));
    CHECK(find(text, "Still") == string("still"));
    CHECK(find(text, "lack") != string("flack"));
    CHECK(find(text, "Abter") == string("abter"));
    CHECK_THROWS_AS(find(text, "rose"), std::exception);
    CHECK_THROWS_AS(find(text, "strong"), std::exception);
    CHECK_THROWS_AS(find(text, "always"), std::exception);
}

TEST_CASE("Test replacement of b and p") { //9
    string text = "bunks like blaying drum and pass";
    CHECK(find(text, "punks") == string("bunks"));
    CHECK(find(text, "Punks") == string("bunks"));
    CHECK(find(text, "playing") == string("blaying"));
    CHECK(find(text, "Playing") == string("blaying"));
    CHECK(find(text, "bass") == string("pass"));
    CHECK(find(text, "Bass") == string("pass"));
    CHECK(find(text, "Blaying") == string("blaying"));
    CHECK_THROWS_AS(find(text, "Blay"), std::exception);
    CHECK_THROWS_AS(find(text, "Sunks"), std::exception);
}

TEST_CASE("Test replacement of f and p") { //11
    string text = "Nik Furry playing ape furious";
    CHECK(find(text, "purry") == string("Furry"));
    CHECK(find(text, "afe") == string("ape"));
    CHECK(find(text, "Purry") == string("Furry"));
    CHECK(find(text, "Flaying") == string("playing"));
	CHECK(find(text, "Playing") == string("playing"));
	CHECK(find(text, "flaying") == string("playing"));
    CHECK(find(text, "Afe") == string("ape"));
    CHECK(find(text, "Purious") == string("furious"));
	CHECK(find(text, "purious") == string("furious"));
	CHECK_THROWS_AS(find(text, "afk"), std::exception);
	CHECK_THROWS_AS(find(text, "banana"), std::exception);
}

TEST_CASE("Test replacement of g and j") { //12
    string text = "great Job Goggle Jin";
    CHECK(find(text, "Great") == string("great"));
    CHECK(find(text, "gob") == string("Job"));
    CHECK(find(text, "jojjle") == string("Goggle"));
    CHECK(find(text, "Gojjle") == string("Goggle"));
	CHECK(find(text, "Great") != string("Great"));
    CHECK(find(text, "gob") != string("job"));
    CHECK(find(text, "Gogjle") == string("Goggle"));
    CHECK(find(text, "Gin") == string("Jin"));
	CHECK_THROWS_AS(find(text, "John"), std::exception);
	CHECK_THROWS_AS(find(text, "Jinny"), std::exception);
	CHECK_THROWS_AS(find(text, "Soggle"), std::exception);
	CHECK_THROWS_AS(find(text, "maps"), std::exception);
}

TEST_CASE("Test replacement of c and k") { //8
    string text = "i love to cook in cooking cap";
    CHECK(find(text, "Cook") == string("cook"));
    CHECK(find(text, "kook") == string("cook"));
    CHECK(find(text, "kooking") == string("cooking"));
    CHECK(find(text, "coocing") == string("cooking"));
	CHECK(find(text, "kap") == string("cap"));
    CHECK(find(text, "Kap") == string("cap"));
	CHECK_THROWS_AS(find(text, "sorry"), std::exception);
	CHECK_THROWS_AS(find(text, "candle"), std::exception);
}

TEST_CASE("Test replacement of c and q") { // 8
    string text = "i can cook and queue for tech support on phone";
	CHECK(find(text, "qan") == string("can"));
    CHECK(find(text, "Can") == string("can"));
	CHECK(find(text, "Qan") == string("can"));
    CHECK(find(text, "Qook") == string("cook"));
    CHECK(find(text, "Cook") == string("cook"));
    CHECK(find(text, "cueue") == string("queue"));
	CHECK_THROWS_AS(find(text, "Billy"), std::exception);
	CHECK_THROWS_AS(find(text, "Chohen"), std::exception);
}

TEST_CASE("Test replacement of k and q") { //8
    string text = "king or queen knows koko ";
    CHECK(find(text, "qing") == string("king"));
    CHECK(find(text, "King") == string("king"));
    CHECK(find(text, "Kueen") == string("queen"));
    CHECK(find(text, "qnows") == string("knows"));
	CHECK(find(text, "Qing") == string("king"));
    CHECK(find(text, "kueen") == string("queen"));
    CHECK(find(text, "qoqo") == string("koko"));
    CHECK(find(text, "Qoko") != string("koko"));
}

TEST_CASE("Test replacement of s and z") {//7
    string text = "Pizza Soom papperoni and zucini salad";
    CHECK(find(text, "PIzsa") == string("Pizza"));
    CHECK(find(text, "pissa") == string("Pizza"));
    CHECK(find(text, "Zoom") == string("Soom"));
    CHECK(find(text, "zoom") == string("Soom"));
    CHECK(find(text, "sucini") == string("zucini"));
    CHECK(find(text, "zalad") == string("salad"));
    CHECK(find(text, "Zalad") == string("salad"));
}

TEST_CASE("Test replacement of d and t") { // 7
    string text = "dont touch my tralala";
    CHECK(find(text, "tond") == string("dont"));
    CHECK(find(text, "Douch") == string("touch"));
    CHECK(find(text, "dralala") == string("tralala"));
    CHECK(find(text, "Dralala") == string("tralala"));
	CHECK(find(text, "tont") == string("dont"));
    CHECK(find(text, "Douch") != string("Touch"));
    //CHECK(find(text, "trololol") != string("tralala"));
}

TEST_CASE("Test replacement of o and u") { //8
    string text = "you always count some extra skin bounty";
    CHECK(find(text, "You") == string("you"));
    CHECK(find(text, "Cuunt") == string("count"));
    CHECK(find(text, "coont") == string("count"));
    CHECK(find(text, "Boonty") == string("bounty"));
	CHECK(find(text, "BuOnty") == string("bounty"));
	CHECK(find(text, "some") == string("some"));
	CHECK(find(text, "SuMe") == string("some"));
	CHECK(find(text, "Sume") == string("Some"));
}

TEST_CASE("Test replacement of i and y") { //8
    string text = "you and i like yilling";
    CHECK(find(text, "iou") == string("you"));
    CHECK(find(text, "iilling") == string("yilling"));
    CHECK(find(text, "yillyng") == string("yilling"));
    CHECK(find(text, "lyke") == string("like"));
	CHECK(find(text, "Like") == string("like"));
	CHECK(find(text, "You") == string("you"));
	CHECK(find(text, "Iou") == string("you"));
	CHECK(find(text, "lYke") == string("like"));
}
