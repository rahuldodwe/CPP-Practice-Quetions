/* Q.67 Floyd's Triangle

1
23
456
78910

*/
#include <iostream>
using namespace std;
int main() {
    int i, j, num=1;
    for(i=1; i<=4; i++){
        for(j=1; j<=4; j++){
            if(j<=i){
                cout << num;
                num++;
            }
        }
        cout << endl;
    }
}

/*o/p =>

1
23
456
78910

*/