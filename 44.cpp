/*Q.44 Star Pattern 20

********
      * 
     *  
    *   
   *    
  *     
 *      
********

*/

#include<iostream>
using namespace std;
int main() {
    int i,j;
    for(i=1; i<=8; i++){

        for(j=1; j<=8; j++){
            if(i==1 || i==8  || j==9-i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
    cout << endl;
    }
}

/*o/p =>

********
      * 
     *  
    *   
   *    
  *     
 *      
********

*/