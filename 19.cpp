/* Q.19 Palindrome Number eg. 232, 34543
*/
#include <iostream>
using namespace std;

int main() {
    int input;
    int n,r, reverse = 0;
    cout << "Enter a number more than two digits : ";
    cin >> input;
    n = input;
    while(n != 0){
        r = n%10;
        reverse = reverse*10+r;
        n = n/10;
    }
    if(input == reverse) {
        cout << "It is Palindrome Number" << endl;
    } else {
        cout << "It is not a Palindrome Number" << endl;
    }
}

/* O/P -
It is Palindrome Number
*/