/* Q.17 Sum of Digits of a Number
*/
#include <iostream>
using namespace std;

int main() {
    int r, sum = 0, digit = 1234;
    while(digit !=0){
        r = digit%10;
        sum = sum+r;
        digit = digit/10;
    }
    cout << "Sum is " << sum << endl;
}
	
/* O/P -
Sum is 10
*/