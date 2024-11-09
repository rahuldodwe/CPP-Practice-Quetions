/* Q.107 TCS NQT | TCS Digital | Program 2
  A string consists of the combination of letters, numbers and characters.
  You have to focus on "*" and "#" symbol and print the output as if
            num of * > # , print "Greater"
            num of * < # , print "Smaller"
            num of * = # , print Equal

*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter string with * and # : ";
    cin >> s;

    int stars=0;
    int hashes=0;

    int size = s.size();

    cout << "Non symbols = ";

    for(int i=0; i<size; i++){
        if(s[i] == '*'){
            stars = stars+1;
        }
        else if(s[i] == '#'){
            hashes = hashes+1;
        }
        else {
            cout << s[i];
        }
    }
    cout << endl;

    if(stars > hashes){
        cout << "Greater" << endl;
    }
    else if(stars < hashes){
        cout << "Smaller" << endl;
    }
    else {
        cout << "Equal" << endl;
    }

    
    return 0;
}

/*o/p =>

Enter string with * and # : rahul**dodwe###
Non symbols = rahuldodwe
Smaller

*/