/* Q.111 TCS NQT | TCS Digital | Program 4
  In given number, find the difference between the sum of 
  Even and odd digits. Print only positive value.
            

*/

#include <iostream>
using namespace std;

int main()
{
    int n, r, even=0, odd=0;
    cout << "Enter Number : ";
    cin >> n;

    while(n>0){
        r=n%10;
        if(r%2==0){
            even=even+r;
        }
        else{
            odd=odd+r;
        }
        n=n/10;
    }
    if(odd<even){
        cout << "even-odd" << endl;
    }
    else {
        cout << "odd-even" << endl;
    }
    return 0;
}

/*o/p =>

Enter String : RahuL
*###*

*/