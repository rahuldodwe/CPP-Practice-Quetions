/* Q.20 A Armstrong Number : eg. 153 = 1+125+27 = 153
*/
#include <iostream>
using namespace std;

int main() {
    int num, remain, t, cubeSum = 0;
    cout << "Enter Number : ";
    cin >> num;
    t = num;
    while(num != 0) {
        remain = num%10;
        cubeSum = cubeSum + remain*remain*remain;
        num = num/10;
    }
    if(t == cubeSum){
        cout << "It is a Armstrong Number"<< endl;
    } else {
        cout << "It is not a Armstrong Number"<< endl;
    }
}

/* O/P -
Enter Number : 370
It is a Armstrong Number
*/