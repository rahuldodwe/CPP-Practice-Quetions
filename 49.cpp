/*Q.48 Star Pattern 24

*       *
**     **
* *   * *
*  * *  *
*   *   *
*       *
*       *
*       *
*       *

*/

#include <iostream>
using namespace std;
int main() {
    int i,j;
    for(i=1; i<=9; i++){
        for(j=1; j<=9; j++){
            if(j==1 || j==9 || (j==i && i<=5) || (j==10-i && i<=5)){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

/*o/p =>

*       *
**     **
* *   * *
*  * *  *
*   *   *
*       *
*       *
*       *
*       *

*/