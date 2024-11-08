/* Q.82 Hackerrank C++ | Program 6 : pointer
    using function and pointers: 

*/
#include <iostream>
using namespace std;

void update(int *a, int *b){ 
    int sum = *a+*b; 
    int diff;
    if(*a > *b){
        diff = *a-*b;
    } 
    else {
        diff = *b-*a;
    }
    *a = sum;
    *b = diff;
}

int main()
{

    int a, b;
    int *pa = &a, *pb = &b;

    cout << "Enter two numbers : ";
    cin >> a >> b;

    update(pa, pb);
    cout << "sum = " << a << ", diff = " << b << endl;
    return 0;
}

/*o/p =>

Enter two numbers : 4
6
sum = 10, diff = 2

*/