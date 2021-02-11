#include "word_analyzer.h"

int countLetters(string words){
	int charTotal;
	
	for(int x = 0, words[x] != '\0', x++){
		char temp[30];
		temp = words[x];
		
		for(int y = 0, temp[y] != '\0', y++){
			charTotal++;
		}
	}
	return charTotal;
}
  
int countLettersInRange(string words, char lower, char upper){
	int charTotal;
	for(int x = 0, words[x] != '\0', x++){
		char temp[30];
		temp = words[x];
		
		for(int y = 0, temp[y] != '\0', y++){
			if(temp[y] > lower && temp[y] < upper){
				charTotal++;
			}
		}
	}
	return charTotal;
}

int countUpperCaseLetters(string words){
	int charTotal;
	for(int x = 0, words[x] != '\0', x++){
		char temp[30];
		temp = words[x];
		
		for(int y = 0, temp[y] != '\0', y++){
			if(temp[y] > 'A' && temp[y] < 'Z'){
				charTotal++;
			}
		}
	}
	return charTotal;

}
