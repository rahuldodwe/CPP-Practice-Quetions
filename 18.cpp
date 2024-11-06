/* Q.18 Reverse of a Number
*/
#include <iostream>
using namespace std;

int main() {
    int n,r, reverse = 0;
    cout << "Enter a number more than two digits : ";
    cin >> n;
    cout <<  "Reverse of " << n << " is ";
    while(n != 0){ // n = 0 xx
        r = n%10; //234%10 = 4, 23%10  = 3, 2%10 = 2
        reverse = reverse*10+r; // rv = 4, 43, 432
        n= n/10;  // 234 = 23, 23 = 2 , 2 = 0
    }
    cout << reverse << endl;
}
	
/* O/P -
Enter a number more than two digits : 234
Reverse of 234 is 432
*/