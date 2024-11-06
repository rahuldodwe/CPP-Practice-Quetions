/* Q.5 Print reverse table of 2,3,4,5,6,7,8,9,10
*/
#include <iostream>
using namespace std;

int main() {

	    for(int tableNum=2; tableNum<=10; tableNum++){
	        for(int i=tableNum*10; i>=tableNum; i-=tableNum){
	        cout << i << " ";
	        }
	        cout << endl;
	    }
	}
	
/* O/P -
20 18 16 14 12 10 8 6 4 2 
30 27 24 21 18 15 12 9 6 3 
40 36 32 28 24 20 16 12 8 4 
50 45 40 35 30 25 20 15 10 5 
60 54 48 42 36 30 24 18 12 6 
70 63 56 49 42 35 28 21 14 7 
80 72 64 56 48 40 32 24 16 8 
90 81 72 63 54 45 36 27 18 9 
100 90 80 70 60 50 40 30 20 10
*/