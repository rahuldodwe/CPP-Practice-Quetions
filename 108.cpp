/* Q.107 TCS NQT | TCS Digital | Program 1
  Consider the following series: 1,1,2,3,4,9,8,27,16,81,32,243,64,729,128,2187.......
    find the nth term.

*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int findIndex;
    cout << "Enter Index : ";
    cin >> findIndex;

    if(findIndex%2==1){
        int term = (findIndex+1)/2;
        int power = pow(2,term-1);
        cout << power << endl;
    }
    else {
        int term = findIndex/2;
        int power = pow(3,term-1);
        cout << power << endl;
    }


    return 0;
}

/*o/p =>

Enter Index : 10
81

*/