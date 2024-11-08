/* Q.80 Hackerrank C++ | Program 3
    create a function which returns maximum of four num.

Enter four numbers : 
3
3
3
4
max is 4

*/
#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    if(a>b && a>c && a>d){
        cout << "max is " << a << endl;
    } 
    else if(b>a && b>c && b>d){
        cout << "max is " << b << endl;
    } 
    else if(c > a && c > b && c>d){
        cout << "max is " << c << endl;
    } 
    else if(d > a && d > c && d>b){
        cout << "max is " << d << endl;
    } 
    else {
        cout << "Enter different numbers" << endl;
    }

    return 0;
}

int main(){
    
    int a, b, c, d;

    cout << "Enter four numbers : " << endl;
    cin >> a >> b >> c >> d;

    max_of_four(a, b, c, d);
   
}

/*o/p =>

Enter four numbers : 
3
3
3
4
max is 4

*/