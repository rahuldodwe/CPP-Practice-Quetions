/* Q.95 Geeksforgeeks C++ Problems | Program 4 : Given an array of N integers. Your task is to print the sum of all the integers.

*/

#include <iostream>
using namespace std;

class Solution{
    public:
    int getsum(int a[], int n){
        int sum = 0;
        for(int i=1; i<=n; i++){
            sum = sum + a[i];
        }
        return sum;
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter size of array :";
    cin >> n;
    int a[n];
    for(int i=1; i<=n; i++){
        a[i] = i;
    }
    cout << "arr: ";
    for(int i=1; i<=n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Sum is: " << obj.getsum(a, n) << endl;
	return 0;
}



/*o/p =>

Enter size of array :6
arr: 1 2 3 4 5 6 
Sum is: 21

*/