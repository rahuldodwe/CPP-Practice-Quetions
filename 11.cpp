/* Q.11 How to Check a Vowel
*/
#include <iostream>
using namespace std;

int main() {
    char input = 'e';
    
    if(input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' || input == 'A'|| input == 'E'|| input == 'I'|| input == 'O'|| input == 'U'){
        cout << input << " is a vowel" << endl;
    }
    else{
        cout << input << " is not a vowel" << endl;
    }
}
	
/* O/P -
It is not a vowel
*/