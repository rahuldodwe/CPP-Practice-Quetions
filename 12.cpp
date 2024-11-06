/* Q.12 Fibonacci Series 0 1 1 2 3 5 8 13 21...........
*/
#include <iostream>
using namespace std;

int main() {
    int tofirstNum = 10;
    int n1 = 0;
    int n2 = 1;
    int n3 = 0;
    for(int i=0; i<=tofirstNum; i++) {
     
        cout << n3 << " ";
        
        n1 = n2;
        n2 = n3;
        n3 = n1+n2;
    }
}
	
/* O/P -
It is not a vowel
*/