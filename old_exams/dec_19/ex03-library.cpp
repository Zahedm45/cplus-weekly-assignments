#include "ex03-library.h"
#include <iostream>

//Do not modify
WordsList::WordsList(){
	allWords.push_back("121");
	wordsToPalindromeDistance["121"]=0;
	allWords.push_back("122");
	wordsToPalindromeDistance["122"]=1;
}

//Exercise 3 (a) implement this method
void WordsList::print(){
	//put your code here

    cout << allWords.size() << " words:";

    for (const auto &item : allWords) {
        int val = wordsToPalindromeDistance[item];
        cout << " " << item << " (" << val << ")";
    }



}

//Exercise 3 (b) implement this method
int WordsList::distancePalindrome(string s){
	//put your code here

    if (s.empty()) return 0;

    int n1 = 0;
    int n2 = s.size()-1;
    int counter = 0;

    while (n1 < n2) {

        if (s[n1] != s[n2]) counter++;
        n1++;
        n2--;
    }

    return counter;
}

//Exercise 3 (c) implement this method
void WordsList::addWord(string word){
	//put your code here
}

//Exercise 3 (d) implement this method
int WordsList::palindromeWords(){
	//put your code here
}