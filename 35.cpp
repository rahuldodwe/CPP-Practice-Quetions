/*Q.34 Star Pattern 10

*********
**** ****
***   ***
**     **
*       *

*/

#include<iostream>
using namespace std;
int main() {
    int i,j;
    for(i=1; i<=5; i++){
        
        for(j=1;j<=9; j++){
            if(j<=6-i || j>=i+4) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
    cout << endl;
    }
}

/*o/p =>

*********
**** ****
***   ***
**     **
*       *

*/