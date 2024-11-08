/* Q.82 Hackerrank C++ | Program 5 : for loop
    if num = 1-9 print their name and if it is more than print 1-9 and even and odd

*/
#include <iostream>
using namespace std;

int main()
{

    int a, b;
    int num;
    cout << "Enter range: ";
    cin >> a >> b;
    cout << endl;

    for (int i = a; i <= b; i++)
    {
        switch (i)
        {
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;
        case 4:
            cout << "four" << endl;
            break;
        case 5:
            cout << "five" << endl;
            break;
        case 6:
            cout << "six" << endl;
            break;
        case 7:
            cout << "seven" << endl;
            break;
        case 8:
            cout << "eight" << endl;
            break;
        case 9:
            cout << "nine" << endl;
            break;
        default:
        if(i%2==0){
            cout << "even" << endl;
        }
        else {
            cout << "odd" << endl;
        }
        }
    }
}

/*o/p =>

Enter range: 1
15

one
two
three
four
five
six
seven
eight
nine
even
odd
even
odd
even
odd

*/