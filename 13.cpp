/* Q.13 Factorial Program
*/
#include <iostream>
using namespace std;

int main() {
    
   int num = 5;
   int fact = num;
   for(int i=1; i<num; i++){
       fact = fact*i;
   }
   cout << "Factorial of " << num << " is " << fact << endl;
}
	
/* O/P -
Factorial of 5 is 120
*/