/* Q.74 Reverse of an Array

25 20 15 10 5

*/
#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,10,15,20,25};
    int i;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(i=size-1; i>=0; i--){
        cout << arr[i] << " ";
    }
}

/*o/p =>

25 20 15 10 5

*/