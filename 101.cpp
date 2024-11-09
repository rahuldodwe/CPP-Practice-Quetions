/* Q.100 Geeksforgeeks C++ Problems | Program 10 : Before implementing any algorithm, we should be throught with taking inputs. Here, we will learn how to read inputs. 
You are given two inputs a(integer), and b (string). You need to take the input and print a and b separated by a space.

*/

#include <iostream>
using namespace std;

void inputData()
{
    int a;
    string b;
    cout << "Enter num : ";
    cin >> a;

    cout << "enter string : ";
    cin >> b;

    cout << a << " " << b << endl;
};

int main()
{
    inputData();
    return 0;
}

/*o/p =>

Enter num : 5
enter string : rd
5 rd

*/