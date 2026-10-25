// #include <iostream>
// using namespace std;

// class demo1 {
//     int x;    // instance (object) member variable
//     int y;
//     int z;
// public:
//     void f1(int p,int q,int r) { // instance member function
//         //cout << "hello";
//         x = p;
//         y = q;
//         z = r;
//     } // close the f1 function definition

//     void f2() {
//         cout << x << " " << y << " " << z<<endl;
//     } // close the f2 function definition
// }; // close the class definition with a semicolon

// int main() {
//     demo1 d1;
//     d1.f1(10,20,30);
//     d1.f2(40,50,60);

//     d1.f1();
//     d1.f2();




//     return 0;
// }



//--------------or------------------same ------------------------more than differrnt class


#include <iostream>
using namespace std;

class demo1 {
    int x;    // instance (object) member variable
    int y;
    int z;
public:
    void setdata(int p, int q, int r) { // instance member function
        x = p;
        y = q;
        z = r;
    }
     void f2() {
        cout << x << " " << y << " " << z << endl;
    }

    void setdata(int q) { // overloaded instance member function
        x = 5;
        y = 6;
        z = q; // Assign the value of 'q' to 'z'
    }
    void f3() {
        cout << x << " " << y << " " << z << endl;
    }
 
 
};

int main() {
    demo1 d1;
    d1.setdata(10, 20, 30); // Call the first overloaded function
    d1.f2();
    d1.setdata(4); // Call the second overloaded function with a single argument
    d1.f3();
    return 0;
}













