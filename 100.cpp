/* Q.100 Geeksforgeeks C++ Problems | Program 9 : Given a pointer to a variable a, the task is to complete the function updateVar() which will increment the value of the variable by 10. The function does not returns anything.

*/

#include <iostream>
using namespace std;

void updateVar(int *a)
{
    *a = *a + 10;
};

int main()
{
    int a;
    cout << "Enter value : ";
    cin >> a;
    updateVar(&a);

    cout << "Value is increased by 10 is " << a << endl;
    return 0;
}

/*o/p =>

Enter value : 43
Value is increased by 10 is 53

*/