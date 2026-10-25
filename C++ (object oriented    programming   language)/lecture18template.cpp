// function template
// #include <iostream>
// using namespace std;
// // template<class w>
// template<typename w>

// void add(w p, w q)   // Specify the return type as void
// {
//     w r;
//     r=p+q;
//     cout << r << endl;
// }


// int main() {
//     add(6, 7);    // Corrected number of arguments
//     add(5,9);
    

//     return 0; // Add return 0 to indicate successful execution
// }





// class template
#include <iostream>
using namespace std;

template <class k>
class demo {
    k x;
    k y;
    k z;
public:
    void setdata(k p, k q, k r) {
        x = p;
        y = q;
        z = r;
    }
    void display() {
        cout << x << " " << y << " " << z << endl;
    }
};

int main() {
    demo<int> d1;
    d1.setdata(5, 6, 9);
    d1.display();

    demo<double> d2;
    d2.setdata(11.2, 12.4, 14.4);
    d2.display();

    return 0; // Add return 0 to indicate successful execution
}
