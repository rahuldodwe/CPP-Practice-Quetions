/* Q.68 How to Check a Perfect Square

Enter number to check is it perfect square or not : 26
26 is not a perfect squere

*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num;

    cout << "Enter number to check is it perfect square or not : ";
    cin >> num;

    int sqroot = sqrt(num);

    if (sqroot * sqroot == num)
    {
        cout << num << " is perfect squere of " << sqroot << endl;
    } else {
        cout << num << " is not a perfect squere" << endl;
    }

}

    /*o/p =>

Enter number to check is it perfect square or not : 26
26 is not a perfect squere

    */