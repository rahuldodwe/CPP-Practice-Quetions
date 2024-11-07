/* Q.66 Maximum Element of an Array

*/
#include <iostream>
using namespace std;
int main() {
    int arr[] = {5,10,15,30,25,20};
    int i, max=0, size = 6;

    for(i=0; i<6; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout << "Maximum Element is : " << max << endl;
}

/*o/p =>
Maximum Element is : 30
*/