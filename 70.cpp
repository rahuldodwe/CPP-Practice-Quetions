/* Q.70 Find all Factors of a Number: eg 20 is divided by = 1,2,4,5,10

Find the factors of : 50
Factors of 50 = 1 2 5 10 25 

*/
#include <iostream>
using namespace std;
int main()
{
    int i, num;

    cout << "Find the factors of : ";
    cin >> num;

    cout << "Factors of " << num << " = ";

    for(i=1; i<num; i++){
        if(num%i == 0){
            cout << i << " ";
        }
    }
    cout << endl;

}

    /*o/p =>

Find the factors of : 50
Factors of 50 = 1 2 5 10 25 

    */