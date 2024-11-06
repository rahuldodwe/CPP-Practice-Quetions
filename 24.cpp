/* Q.24 LCM and HCF Together : a*b = HCF*LCM
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, rem, lcm, hcf, x, y;
    cout << "enter two numbers" << endl;
    cin >> a >> b;
    x = a;
    y = b;
    while(true){
        lcm = a;
        rem = a%b;
        if(rem==0){
            break;
        }
        a = a*2;
    }
    hcf = x*y/lcm;
    cout << "LCM is : " << lcm << endl;
    cout << "HCF is : " << hcf << endl;
    
}

/* O/P -
enter two numbers
16
4
LCM is : 16
HCF is : 4
*/