/* Q.71 Find all Prime Factors of a Number: eg 20 is divided by = 1,2,4,5,10

Find the Prime factors of : 50
Prime Factors of 50 = 2 5 

*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, num, count=0;

    cout << "Find the Prime factors of : ";
    cin >> num;

    cout << "Prime Factors of " << num << " = ";

    for (i = 1; i < num; i++)
    {
        for (j = 2; j < i; j++)
        {
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            if(num%i==0){
                cout<<i << " ";
                count++;

            }
        }
    }
    if(count==0){
        cout << "Not Found any Prime Factors";
    }
    cout << endl;
}

/*o/p =>

Find the Prime factors of : 50
Prime Factors of 50 = 2 5 

*/