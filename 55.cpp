/*Q.55 Star Pattern 31

*****
 *  *
  * *
   **
    * 

*/

#include <iostream>
using namespace std;
int main() {
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(i==1 || j==5 || j==i){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

}

/*o/p =>

*****
 *  *
  * *
   **
    * 

*/