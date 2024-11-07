/* Q.74 Reverse of a String



*/
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string s = "Rahul";

    // by method
    // cout << strrev(s);


    int i;
    for(i=s.length()-1; i>=0; i--){
        cout << s[i] << "";
    }
}

/*o/p =>



*/