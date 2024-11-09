/* Q.103 Geeksforgeeks C++ Problems | Program 12 : if num is 1-10 print english, else not in range.

*/

#include <iostream>
using namespace std;

class Solution
{
public:
    string isInRange(int n)
    {
        switch (n)
        {
        case 1:
            return "one";
            break;
        case 2:
            return "two";
            break;
         case 3:
            return "three";
            break;
         case 4:
            return "four";
            break;
         case 5:
            return "five";
            break;
         case 6:
            return "six";
            break;
         case 7:
            return "seven";
            break;
         case 8:
            return "eight";
            break;
         case 9:
            return "nine";
            break;
         case 10:
            return "ten";
            break;
        default:
            return "Not in range";
            break;
        }
    }
};

int main()
{
    Solution ob;
    int num;
    cout << "Enter num : ";
    cin >> num;
    cout << ob.isInRange(num) << endl;

    return 0;
}

/*o/p =>

Enter num : 11
Not in range

*/