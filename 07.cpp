/* Q.7 How to print Odd or Even Numbers from 1 to 100
*/
#include <iostream>
using namespace std;

int main() {
    int forOdd = 1;
    int forEven = 2;
    for(int i=forOdd; i<=100; i+=2){
        cout << i << " " ;
    }
}
	
/* O/P -
1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 4
*/