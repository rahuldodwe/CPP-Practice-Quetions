/* Q.103 Geeksforgeeks C++ Problems | Program 12 : if num is = 5, > 5, < 5 print __ than 5

*/

#include <iostream>
using namespace std;

class Solution
{
public:
    string compareFive(int n)
    {
        if (n > 5)
        {
            return "Greater than 5";
        }
        else if (n < 5)
        {
            return "Less than 5";
        }
        else {
            return "Equal to 5";
        }  
    }
};

int main()
{
    Solution ob;
    int num;
    cout << "Enter num : ";
    cin >> num;
    cout << ob.compareFive(num) << endl;

    return 0;
}

/*o/p =>

Enter num : 9
Greater than 5

*/