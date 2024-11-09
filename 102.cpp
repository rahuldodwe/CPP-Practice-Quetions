/* Q.102 Geeksforgeeks C++ Problems | Program 11 : In this task, you'll be required to write three messages in three separate lines. Write Geeks for Geeks. But wait a minute!! You need to write earch word of it in separate line.

*/

#include <iostream>
using namespace std;

void printNewLine()
{   string s = "Rahul Dodwe Ji";
    int size = s.size();
    for(int i=0; i<size; i++){
        if(s[i] == ' '){
            cout << endl;
        }
        else {
            cout << s[i];
        }
    }
    cout << endl;
    
};

int main()
{
    printNewLine();
    return 0;
}

/*o/p =>

Enter num : 5
enter string : rd
5 rd

*/