#include<iostream>
using namespace std;

class OpOver {
    int x, y;
public:
    void setdata(int p, int q) {
        x = p;
        y = q;
    }

    void display() {
        cout << x << " " << y << endl;
    }

    friend OpOver operator +(OpOver o1, OpOver o2); // Declaration of friend function
};

OpOver operator +(OpOver o1, OpOver o2) {
    OpOver r1;
    r1.x = o1.x + o2.x;
    r1.y = o1.y + o2.y;
    return r1;
}

int main() {
    OpOver o1, o2, o3;
    o1.setdata(4, 7);
    o2.setdata(5, 18);
    o3 = o1 + o2; // Using the overloaded operator+

    o3.display();

    return 0;
}









// # Explanation:

// 1.In the OpOver class, we declared a friend function operator+ that takes two OpOver objects as parameters.
// 2.In the main function, we created three OpOver objects o1, o2, and o3.
// 3.We used the setdata function to set the values of x and y for o1 and o2.
// 4.We then performed addition of o1 and o2 using the overloaded operator+ and stored the result in o3.
// 5.Finally, we called the display function on o3 to display the result.
// 6.This corrected code should compile and run without errors in Visual Studio Code.
// 7.It demonstrates operator overloading in C++ for addition (+).