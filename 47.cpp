/*Q.47 Star Pattern 23

*      *
**     *
* *    *
*  *   *
*   *  *
*    * *
*     **
*      *

*/

#include<iostream>
using namespace std;
int main() {
    int i,j;
    for(i=1; i<=8; i++){

        for(j=1; j<=8; j++){
            if(j==1 || j==8 || j==i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
    cout << endl;
    }
}

/*o/p =>

*      *
**     *
* *    *
*  *   *
*   *  *
*    * *
*     **
*      *

*/