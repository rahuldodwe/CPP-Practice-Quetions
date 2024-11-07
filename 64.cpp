/*Q.64 Star Pattern 40

A
AB
ABC
ABCD
ABCDE

*/

#include <iostream>
using namespace std;
int main() {
    int i,j;
    
    for(i=1; i<=5; i++){

        char c = 'A';
        for(j=1; j<=5; j++){
            
            if(j<=i){
                cout << c;
                c++;
                
            }
            
        }
        cout << endl;
    }

}

/*o/p =>

A
AB
ABC
ABCD
ABCDE

*/