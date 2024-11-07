/* Q.73 Convert Degree Celsius to Fahrenheit

Enter Degree Celsius : 28
82.4 Farenheit

*/
#include <iostream>
using namespace std;
int main(){
    float deg;
    float fer;
    
    cout << "Enter Degree Celsius : ";
    cin >> deg;

    fer = (deg*9/5)+32;

    cout << fer << " Farenheit" << endl;
}

/*o/p =>

Enter Degree Celsius : 28
82.4 Farenheit

*/