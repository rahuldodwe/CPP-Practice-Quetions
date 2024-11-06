/* Q.9 Swapping of Two Numbers
*/
#include <iostream>
using namespace std;

int main() {
    int a = 8, b = 6, c;
    cout << "a = " << a << " b = "  << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "a = " << a << " b = "  << b << endl;
}
	
/* O/P -
a = 8 b = 6
a = 6 b = 8
*/