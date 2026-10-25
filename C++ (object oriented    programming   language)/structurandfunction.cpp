// #include <iostream>
// using namespace std;

// // Function declaration
// void sahil() {
//     cout << "A";
// }

// void raj() {
//     cout << "B";
// }

// int main() {
//     raj();
//     raj();
//     cout << "D";
//     sahil();

//     return 0;
// }














#include <iostream>
using namespace std;

// Define a struct named 'student'
struct student {
    int roll;
    float per;
    int marks;

    // Define member functions inside the struct
    void fun1() {
        cout << "A" << endl;
    }

    void fun2() {
        cout << "B" << endl;
    }
};

// Define a class named 'book'
class book {
public: // 'public' should be lowercase
    int x;
    int y;
    int z;

    void f1() {
        x = 11;
        y = 12;
        z = 13;
    }
};

int main() {
    // Create an instance of 'student' struct
    student s1;

    // Call member functions of 'student' struct
    s1.fun1();
    s1.fun2();

    // Create an instance of 'book' class
    book b1;

    // Call member function of 'book' class
    b1.f1();

    // Print values of 'x', 'y', and 'z' from the 'book' instance
    cout << b1.x << " " << b1.y << " " << b1.z;

    return 0;
}
