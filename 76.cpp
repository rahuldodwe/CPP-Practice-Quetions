/* Q.76  Anagrams Program
Two Strings are said to be in Anagrams if -
a) They have same length
b) They have equal numbers of characters with different order
c) One String can be formed from another string
Eg: sanjeetcoder & codersanjeet

Both are in Anagram

*/
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;



int main(){
    string s1 = "rahul";
    string s2 = "ulrah";
    
    int lengths1 = s1.length();
    int lengths2 = s2.length();


    if(lengths1 == lengths2){
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if(s1 == s2) {
            cout << "Both are in Anagram" << endl;
        } else {
            cout << "Both are not in Anagram" << endl;
        }
    } else {
        cout << "Both are not in Anagram" << endl;
    }



}

/*o/p =>

Both are in Anagram

*/