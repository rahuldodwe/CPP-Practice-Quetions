/* Q.87 Hackerrank C++ | Program 10 : Rectangle Area
using Class and Object

*/

#include <iostream>
using namespace std;

class Rectangle{
    public:
    int width;
    int height;
    void display(){
        cout << "Width is " << width << ", " << "Height is " << height << endl;
    }
};

class RectangleArea :public Rectangle{
    public:
    void read_input(){
        cout << "Enter Width : ";
        cin >> width;

        cout << "Enter Height : ";
        cin >> height;
    };
    void display(){
        cout << "Area = " << width*height << endl;
    }
};


int main() {

    RectangleArea r_area;

    r_area.read_input();
    
    r_area.Rectangle::display();
    
    r_area.display();
    
    return 0;
}

/*o/p =>

Enter Width : 5
Enter Height : 7
Width is 5, Height is 7
Area = 35

*/