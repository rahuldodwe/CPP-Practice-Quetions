/* Q.23 LCM of Two Numbers : a=20, b=16 
                             20%16 = not0
                             40%16 = not0
                             60%16 = 0
                             LCM = 60
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, rem, lcm;
    cout << "enter two numbers : ";
    cin >> a >> b;
    while(rem != 0){
        lcm = a;
        rem = a%b;
        a = a*2;
    }
    
    cout << "LCM is : " << lcm << endl;
    
}

/* O/P -
enter two numbers : 20
16
LCM is : 80
*/