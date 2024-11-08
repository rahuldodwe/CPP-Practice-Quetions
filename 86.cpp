/* Q.85 Hackerrank C++ | Program 9 : Structure

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


    struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student st;
    
    cout << "Enter Age : ";
    cin >> st.age;

    cout << "Enter First Name : ";
    cin >> st.first_name; 

    cout << "Enter Last Name : ";
    cin >> st.last_name;
    
    cout << "Class : ";
    cin>> st.standard;

    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard << endl;
    
    return 0;
}

/*o/p =>

Enter Age : 23
Enter First Name : rahul
Enter Last Name : dodwe
Class : 12
23 rahul dodwe 12

*/