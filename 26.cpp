/*Q.26 Star Pattern 2

* * * * * 
* * * * 
* * * 
* * 
* 

*/

#include<iostream>
using namespace std;
int main() {
    int n = 5;
    for(int i=0; i<n; i++){
        for(int j=n-i; j>0; j--){
            cout << "* ";
        }
        cout << endl;
    }
}

/*o/p =>

* * * * * 
* * * * 
* * * 
* * 
* 

*/