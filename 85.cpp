/* Q.85 Hackerrank C++ | Program 8 : Strings

*/
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s1;
    string s2;
    char t1, t2;

    cout << "Enter first string : ";
    cin >> s1;

    cout << "Enter second string : ";
    cin >> s2;

    int leng1 = s1.size();
    int leng2 = s2.size();
    cout << "Length of " << s1 << " is " << leng1 << ", " << "Length of " << s2 << " is " << leng2 << endl;

    string sum = s1 + s2;
    cout << "sum is : " << sum << endl;

    t1 = s1[0];
    t2 = s2[0];
    s1[0] = t2;
    s2[0] = t1;
    cout << "Change First element : " << s1 << " " << s2 << endl;

    return 0;
}

/*o/p =>

Enter first string : ram
Enter second string : shiv
Length of ram is 3, Length of shiv is 4
sum is : ramshiv
Change First element : sam rhiv

*/