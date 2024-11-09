/* Q.107 TCS NQT | TCS Digital | Program 3
  In given string, replace each lower case character with "#" symbol and 
  each uppercase character with "*"
            

*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter String : ";
    cin >> str;

    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'A' && str[i]<='Z'){
            str[i] = '*';
        }
        if(str[i] >= 'a' && str[i]<='z'){
            str[i] = '#';
        }
    }

    cout << str << endl;
    return 0;
}

/*o/p =>

Enter String : RahuL
*###*

*/