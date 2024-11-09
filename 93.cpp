/* Q.92 Geeksforgeeks C++ Problems | Program 1 : Given two integers A and B. Your tasks is to return their product. 

*/

#include <iostream>
using namespace std;

class Solution{
    public:
    int product(int a, int b){
        return a+b;
    }
};

int main() {
    int A, B;
    cin >> A >> B;
	Solution obj;
    cout << "Product = " << obj.product(A, B) << endl;
	return 0;
}



/*o/p =>

4
5
Product = 9

*/