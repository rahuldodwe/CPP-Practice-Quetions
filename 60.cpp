/*Q.60 Star Pattern 36

    *    
   ***   
  * * *  
 *  *  * 
*********
 *  *  * 
  * * *  
   ***   
    *     

*/

#include <iostream>
using namespace std;
int main() {
    int i,j,k=0;
    for(i=1; i<=9; i++){
        i<=5?k++:k--;

        for(j=1; j<=9; j++){
            if(i==5 || j==5 || j==4+k || j==6-k ){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

}

/*o/p =>

    *    
   ***   
  * * *  
 *  *  * 
*********
 *  *  * 
  * * *  
   ***   
    *   

*/