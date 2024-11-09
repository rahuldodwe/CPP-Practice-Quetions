/* Q.106 Geeksforgeeks C++ Problems | Program 15 : char is vowel or not.

*/

#include <iostream>
using namespace std;

class Solution{
    public:
    string isVowel(char c){
        switch(c){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            return "YES";
            default:
            return "NO";
        }
    }
};

int main()
{
    Solution ob;
    char c;

    cout << "Enter Character : ";
    cin >> c;
    cout << "Is vowel : " << ob.isVowel(c) << endl;


    return 0;
}

/*o/p =>

Enter Character : y
Is vowel : NO

*/