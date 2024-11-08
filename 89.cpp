/* Q.89 Hackerrank C++ | Program 12 : Class

*/

#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
    int age, standard;
    string first_name, last_name;

    public:
    void set_age(int a){
        age = a;
    }
    int get_age(){
        return age;
    }

    void set_first_name(string first){
        first_name = first;
    }
    string get_first_name(){
        return first_name;
    }

    void set_last_name(string last){
        last_name = last;
    }
    string get_last_name(){
        return last_name;
    }
    
    void set_standard(int std){
        standard = std;
    }
    int get_standard(){
        return standard;
    }
    string to_string(){
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << endl; 
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

/*o/p =>

23
dodwe, rahul
16

23,rahul,dodwe,16

*/