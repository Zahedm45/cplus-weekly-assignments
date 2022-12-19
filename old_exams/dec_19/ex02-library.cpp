#include "ex02-library.h"
#include <iostream>

//Exercise 2 (a) Implement this function

string reverse(string s, int n){
	//put your code here

    string reverse_str;

    for (int i = n; i >= 0; --i) {
        reverse_str += s[i];
    }
    return reverse_str;
}

//Exercise 2 (b) Implement this function
bool isPalindrome(string s, int n1, int n2){
	//put your code here
    if (n1 >= n2 || s.empty()) return true;

    if (s[n1] == s[n2]){
       return isPalindrome(s, n1+1, n2-1);
    }

    return false;
}


int counter = 0;
//Exercise 2 (c) Implement this function
int distancePalindrome(string s, int n1, int n2){
	//put your code here

    if (n1 >= n2) {
        int result = counter;
        counter = 0;
        return result;
    }

    if (s[n1] != s[n2]) counter++;
    return distancePalindrome(s, n1+1, n2-1);

}