#include "PhoneticFinder.hpp"
#include <iostream>
using namespace std;

namespace phonetic {
	string find(string text, string word) {
		if ((word == " ") || (word == ""))
		 throw std::invalid_argument( "Can't find given word in the text!" ); 
		string answer;
		int count=0;
		for (int i=0; i<text.length(); i++){
			if (tolower(word[count++]) == tolower(text[i])){
				answer+=text[i];
				if (count == word.length()){
				    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
					else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
				}
			}
			else if(tolower(word[count++]) == 'v'){
				if (tolower(text[i]) == 'w'){
					answer+=text[i];
					if (count == word.length()){
						if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 'w'){
				if (tolower(text[i]) == 'v'){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 'b'){
				if ((tolower(text[i]) == 'f') || (tolower(text[i]) == 'p')){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 'f'){
				if ((tolower(text[i]) == 'b') || (tolower(text[i]) == 'p')){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 'p'){
				if ((tolower(text[i]) == 'f') || (tolower(text[i]) == 'b')){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 'g'){
				if (tolower(text[i]) == 'j'){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 'j'){
				if (tolower(text[i]) == 'g'){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 'c'){
				if ((tolower(text[i]) == 'k') || (tolower(text[i]) == 'q')){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 'k'){
				if ((tolower(text[i]) == 'q') || (tolower(text[i]) == 'c')){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 'q'){
				if ((tolower(text[i]) == 'c') || (tolower(text[i]) == 'k')){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 's'){
				if (tolower(text[i]) == 'z'){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 'z'){
				if (tolower(text[i]) == 's'){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 'd'){
				if (tolower(text[i]) == 't'){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 't'){
				if (tolower(text[i]) == 'd'){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 'o'){
				if (tolower(text[i]) == 'u'){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 'u'){
				if (tolower(text[i]) == 'o'){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 'i'){
				if (tolower(text[i]) == 'y'){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else if(tolower(word[count++]) == 'y'){
				if (tolower(text[i]) == 'i'){
					answer+=text[i];
					if (count == word.length()){
					    if ((i+1 == text.length()) || (text[i+1] == ' ') ){ return answer; }
						else {
							answer.clear();
							count=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					answer.clear();
					count=0;
				}
			}
			else{
				answer.clear();
				count=0;
			}
		}
		throw std::invalid_argument( "Can't find given word in the text!" );
		return "Error";
	}
}
