/* Q.82 Hackerrank C++ | Program 7 : Array Introduction

*/
#include <iostream>
using namespace std;



int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    
    cout << "Enter Elements :";

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Reverse array = ";

    for(int i=n-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    
    
    return 0;
}

/*o/p =>

Enter size of array : 4
Enter Elements :8
5
3
9
Reverse array = 9 3 5 8

*/