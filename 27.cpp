/*Q.27 Star Pattern 3

*****
 ****
  ***
   **
    *

*/

#include<iostream>
using namespace std;
int main() {
    int n = 5;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(j>=i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

/*o/p =>

*****
 ****
  ***
   **
    *

*/