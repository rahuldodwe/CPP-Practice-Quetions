/* Q.22 HCF(Highest common factor) of Two Numbers : a=9, b=6 
                             9%6 = 3
                             6%3 = 0
                             HCF = 3
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, hcf, rem;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    while(b != 0){
        hcf = b;
        rem = a%b;
        a = b;
        b = rem;
    }
    cout << "HCF is : " << hcf << endl;
    
}

/* O/P -
Enter two numbers : 9
6
HCF is : 3
*/