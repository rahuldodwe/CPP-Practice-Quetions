/* Q.68 Remove Vowel From a String

Enter String : RAHUL
After removing Vowel : RHL

*/
#include <iostream>
using namespace std;
int main() {
    string s;
    cout << "Enter String : ";
    getline(cin,s);
    int i;
    cout << "After removing Vowel : ";
    for(i=0; i<s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U'){
            continue;
        }
        else {
            cout << s[i];
        }
    }
    cout << endl;
}

/*o/p =>

Enter String : RAHUL
After removing Vowel : RHL

*/