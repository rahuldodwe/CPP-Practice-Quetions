/*Q.53 Star Pattern 29

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
            if(i==1 || j==1 || j==6-i){
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