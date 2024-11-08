/* Q.80 Hackerrank C++ | Program 4
    if num = 1-9 print their name and if it is more than 9 print Greater than 9



*/
#include <iostream>
using namespace std;

int printNum(int num){
    if(num==1){
        cout << "one" << endl;
    }
    else if(num==2){
        cout << "two" << endl;
    }
    else if(num==3){
        cout << "three" << endl;
    }
    else if(num==4){
        cout << "four" << endl;
    }
    else if(num==5){
        cout << "five" << endl;
    }
    else if(num==6){
        cout << "six" << endl;
    }
    else if(num==7){
        cout << "seven" << endl;
    }
    else if(num==8){
        cout << "eight" << endl;
    }
    else if(num==9){
        cout << "nine" << endl;
    }
    else if(num>=2){
        cout << "Greater than 9" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}

int main(){
    
    int num;

    cout << "Enter numbers : ";
    cin >> num;

    printNum(num);

    
   
}

/*o/p =>

Enter four numbers : 
3
3
3
4
max is 4

*/