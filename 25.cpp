/*Q.25 Star Pattern 1 

* 
* * 
* * * 
* * * *

*/

#include<iostream>
using namespace std;
int main() {
    int n = 5;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

/*o/p =>

* 
* * 
* * * 
* * * *

*/