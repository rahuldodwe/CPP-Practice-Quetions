/*Q.52 Star Pattern 28

*    
**   
* *  
*  * 
*****

*/

#include <iostream>
using namespace std;
int main() {
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(i==5 || j==1 || j==i){
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
**   
* *  
*  * 
*****

*/