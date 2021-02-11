#include <iostream>
#include <fstream>
#include <string>
#include "word_analyzer.h"
using namespace std;

int getWords(int strSize, string words, string wordFile);
string findLongestWord(int wordStored, string words);

int main(int argc, char *argv[]){
	int strSize = 25, wordStored;
	string wordFile = argv[1];
	string words[strSize];
	char upper = 'f', lower = 'a';
	if (argc != 2) {
  		cout << "Correct usage:" << endl;
  		cout << "./text_analyzer filename" << endl;
  		return 0;
	}
	
	wordStored = getWords(strSize, words, wordFile);
	
	cout << "There are " << countLetters(words) << " letters in your file." << endl;
	cout << "There are " << countUpperCaseLetters(words) << " upper case letters in your file." << endl;
	cout << "There are " << countLettersInRange(words, lower, upper) << "letters between 'a' and 'f'." << endl;
	cout << "The longest word in this file is " << findLongestWord(wordStored, words) << endl;
	
	return 0;
}

int getWords(int strSize, string words, string wordFile){
	int wordStored = 0;

	ifstream file (wordFile);
	if (file.is_open()){
		while (getline(file,line)){
			cout << words[wordStored] << line << '\n';
			wordStored++;
		}
		file.close();
	}
	else cout << "Unable to open file"; 

	return wordStored;
}

string findLongestWord(int wordStored, string words){
	int longestWordNum, longestWordLength;
	char longestWord[30];
	
	for(int x = 0, x < wordStored, x++){
		char str[30];
		int currentWordLength;
		
		str = words[x];
		
		for(currentWordLength = 0; str[currentWordLength] != '\0'; currentWordLength++){
		}
		
		if(currentWordLength > longestWordLength){
			longestWord = words[x];
			longestWordLength = currentWordLength;
		}
	}
	
	return longestWord;
}
