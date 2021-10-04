// Operator overloading Simple example in CPP
// @its-Kumar

#include <iostream>
using namespace std;

/**
 * @brief class to represent a Cube shape

*/
class Cube {
private:
    double length;
    double height;
    double breadth;

public:
    void setLength(double l) {
        length = l;
    }
    void setBreadth(double b) {
        breadth = b;
    }
    void setHeight(double h) {
        height = h;
    }
    double getVolume(void) {
        return length * height * breadth;
    }

    //overload + operator to add to Cube
    Cube operator+(const Cube& b) {
        Cube c;
        c.length = this->length + b.length;
        c.breadth = this->breadth + b.breadth;
        c.height = this->height + b.height;
        return c;
    }

    //overload - operator to subtract to Cube
    Cube operator-(const Cube& b) {
        Cube c;
        c.length = this->length - b.length;
        c.breadth = this->breadth - b.breadth;
        c.height = this->height - b.height;
        return c;
    }

    //overload << operator to display the Cube
    friend ostream& operator<<(ostream& os, const Cube& x) {
        os << "\nCube:\n" << "\tLength: " << x.length << "\n\tBreadth: " << x.breadth << "\n\tHeight: " << x.height << endl;
        return os;
    }

};

int main() {
    Cube c1, c2, c3;

    c1.setLength(4.0);
    c1.setBreadth(6.0);
    c1.setHeight(5.0);
    cout << c1;
    cout << "volume of cube1: " << c1.getVolume() << endl;
    cin;

    c2.setLength(8.0);
    c2.setBreadth(4.0);
    c2.setHeight(10.0);
    cout << c2;
    cout << "volume of cube2: " << c2.getVolume() << endl;
    cin;

    c3 = c1 + c2;

    cout << c3;
    cout << "volume of cube3: " << c3.getVolume() << endl;

    Cube c4 = c2 - c1;

    cout << c4;
    cout << "volume of cube4: " << c4.getVolume() << endl;
    return 0;
}
