/* Q.15 How to Check a Prime Number
*/
#include <iostream>
using namespace std;

int main() {
    
    int num = 23;
    int i;
    
    for(i=2; i<num; i++) {
        if(num%i == 0){
            cout << num << " is not a prime number" << endl;
            break;
        }
    }
    if(i==num){
        cout << num << " is a prime number" << endl;
    }
}
	
/* O/P -
23 is a prime number
*/