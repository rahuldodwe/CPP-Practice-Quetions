/* Q.16 Print Prime Numbers from 1 to 100
*/
#include <iostream>
using namespace std;

int main() {
    int i, k, toNum = 50;
    for(i=2; i<toNum; i++){
        for(k=2; k<i; k++){
            if(i%k ==0){
                cout << "";
                break;
            }
        }
        if(k==i){
            cout << k << " ";
        }
    }
}
	
/* O/P -
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 
*/