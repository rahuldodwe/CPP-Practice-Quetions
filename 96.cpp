/* Q.96 Geeksforgeeks C++ Problems | Program 5 : Given an array A[] of N integers and an index Key. Your task is to print the element present at index key in the array.

*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int getele(int a[], int key, int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (key == i)
            {
                key = a[i];
                break;
            }
        }
        return key;
    }
};

int main()
{
    Solution obj;
    int n;
    int key;
    cout << "Enter size of array :";
    cin >> n;

    int a[n];
    for (int i = 1; i <= n; i++)
    {
        a[i - 1] = i * 10;
    }

    cout << "arr: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Enter index ele : ";
    cin >> key;

    cout << "ele is: " << obj.getele(a, key, n) << endl;
    return 0;
}

/*o/p =>

Enter size of array :6
arr: 10 20 30 40 50 60 
Enter index ele : 2
ele is: 30

*/