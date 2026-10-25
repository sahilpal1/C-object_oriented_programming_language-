// #include <iostream>
// using namespace std;

// class Com {
//     int x;
//     int y;
// public:
//     void setdata(int p, int q) {
//         x = p;
//         y = q;
//     }

//     Com operator -() {  // negative
//         Com k1;
//         k1.x = -x;
//         k1.y = -y;
//         return k1;
//     }

//     void display() {
//         cout << x << " " << y << endl;
//     }
// };

// int main() {
//     Com c1, c2;
//     c1.setdata(5, 7);
//     c2=-c1; //c2 = c1.negative();
//     // c1.display();  
//     c2.display();

//     return 0;
// }




// Explanation:

// 1. class Com { ... };: Defines a class named Com.
// 2. int x; int y;: Declares two private member variables x and y to store the real and imaginary parts of a complex number.
// 3. void setdata(int p, int q) { ... }: Defines a member function setdata that sets the values of x and y with the provided arguments.
// 4. Com negative() { ... }: Defines a member function negative that returns a Com object which represents the negative of the current-
//  complex number.
// 5. void display() { ... }: Defines a member function display to display the real and imaginary parts of the complex number.
// 6. In the main function, an object c1 of class Com is created and its setdata function is called to set the values of x and y.
// 7. Then, the negative function is called on c1 to get the negative of c1, which is stored in c2.
// 8. Finally, the display function is called on c2 to display the negative of c1.


// (This corrected code should compile and run without errors in Visual Studio Code. 
// It demonstrates the creation of a simple class to represent complex numbers and the implementation of member functions to set data, 
// calculate the negative of a complex number, and display the complex number.)




// uniary operator .cpp 
// pre increment program 
// #include <iostream>
// using namespace std;

// class UnaryOver {
//     int x;
//     int y;
// public:
//     void setdata(int p, int q) {
//         x = p;
//         y = q;
//     }

//     UnaryOver operator++() {
//         UnaryOver t1;
//         t1.x = ++x;
//         t1.y = ++y;
//         return t1;
//     }

//     void display() {
//         cout << x << " " << y << endl;
//     }
// };

// int main() {
//     UnaryOver u1, u2;
//     u1.setdata(6, 8);
//     u2 = ++u1; // Corrected the variable name from 'ul' to 'u1'
//     u2.display();

//     return 0;
// }

















// uniary operator .cpp
// postincrement operator
#include <iostream>
using namespace std;

class UnaryOver {
    int x;
    int y;
public:
    void setdata(int p, int q) {
        x = p;
        y = q;
    }

    UnaryOver operator --(int) {
        UnaryOver t1;
        t1.x = x--;
        t1.y = y--;
        return t1;
    }

    void display() {
        cout << x << " " << y << endl;
    }
};

int main() {
    UnaryOver u1, u2;
    u1.setdata(6, 8);
    u2 = u1--; // Corrected the variable name from 'ul' to 'u1'
    u2.display();

    return 0;
}