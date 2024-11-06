/*Q.29 Star Pattern 8

*
**
***
****
*****
****
***
**
*

*/

#include<iostream>
using namespace std;
int main() {
    int i,j;
    for(i=1; i<=9; i++){

        for(j=1; j<=5; j++){

            if(j>=6-i && j<=10-i){
                cout  << "*";
            }
        }
        cout << endl;
    }
}

/*o/p =>

*
**
***
****
*****
****
***
**
*

*/