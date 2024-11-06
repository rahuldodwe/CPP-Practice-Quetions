/* Q.10 Swapping of Two Numbers Without Using Third Variable
*/
#include <iostream>
using namespace std;

int main() {
    int a = 8, b = 6;
    cout << "a = " << a << " b = "  << b << endl;
    a = a+b; // a = 14
    b = a-b; //b = 14-6 = 8
    a = a-b;  //a = 14-8 =  6
    cout << "a = " << a << " b = "  << b << endl;
}
	
/* O/P -
a = 6 b = 8
*/