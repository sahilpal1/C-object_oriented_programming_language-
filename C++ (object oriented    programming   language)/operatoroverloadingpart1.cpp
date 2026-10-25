// #include <iostream>
// using namespace std;
// class Complex
// {
//     public:    // public nahi hoga to c1.x and ...... jo bhi ha run nahi karaga thik ha .
//     int x ;
//     int y; 
// };
// int main()
// {  

//     Complex c1,c2,c3;
//     c1.x=5;
//     c1.y=8;
//     c2.x=2;
//     c2.y=6;
//     c3.x=c1.x+c2.x;
//     c3.y=c1.y+c2.y;
//     cout<<c3.x<<" "<<c3.y<<endl;
    

// }







// #include <iostream>
// using namespace std;

// class Complex {
//     int x;
//     int y;
// public:
//     void setData(int p, int q) {
//         x = p;
//         y = q;
//     }

//     Complex add(Complex g1) {
//         Complex p1;
//         p1.x = x + g1.x;
//         p1.y = y + g1.y;
//         return p1;
//     }

//     void display() {
//         cout << x << " + " << y <<"i" << endl;
//     }
// };

// int main() {
//     Complex c1, c2, c3;
//     c1.setData(5, 9);
//     c2.setData(11, 15); // Call setData on c2 to initialize its values
//     c3 = c1.add(c2);    // Perform addition
//     c3.display();

//     return 0;
// }



















#include <iostream>
using namespace std;

class Complex {
    int x;
    int y;
public:
    void setData(int p, int q) {
        x = p;
        y = q;
    }

    Complex operator +(Complex g1) {
        Complex p1;
        p1.x = x + g1.x;
        p1.y = y + g1.y;
        return p1;
    }

    void display() {
        cout << x << " + " << y <<"i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;
    c1.setData(5, 9);
    c2.setData(11, 15); // Call setData on c2 to initialize its values
    c3=c1+c2;
    c3.display();

    return 0;
}
