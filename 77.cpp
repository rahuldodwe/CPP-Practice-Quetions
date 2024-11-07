/* Q.77 Pascal's Triangle

1     
1 1    
1 2 1   
1 3 3 1  
1 4 6 4 1 

*/
#include <iostream>
using namespace std;



int main(){
    
    for(int i=1; i<=5; i++){
        int k=1;
        for(int j=1; j<=5; j++){
            if(j<=i) {
                cout << k << " ";
                k=k*(i-j)/j;
            } else {
                cout << " ";
            }
            
        }
        cout << endl;
    }



}

/*o/p =>

1     
1 1    
1 2 1   
1 3 3 1  
1 4 6 4 1 

*/