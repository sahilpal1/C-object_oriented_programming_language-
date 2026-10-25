// #include <iostream>
// using namespace std;
// class demo1
// {
//     public:
//     demo1()
//     {
//         cout<<"parent constructor"<<endl;
//     }
//     int x;
//     int y;
//     void f1(){
//         cout<<"fun1 executed."<<endl;
//     }


// };

// class demo2: public demo1
// {
//     public:
//     demo2() : demo1()
//     {
//         cout<<"child class constructor"<<endl;
//     }
//     int z;
//     void f2(){
//         cout<<"fun2 executed."<<endl;
//     }

// };
// int main() {
//     demo2 d1;
//     d1.z=55;
//     d1.x=23;
//     d1.y=27;
//     cout<<d1.z<<" "<<d1.x<<" "<<d1.y<<endl;
//     d1.f1();
//     d1.f2();

// }
















//-----------constructor ka part ha vo thik ha  .

// #include <iostream>
// using namespace std;
// class demo1
// {
//     public:
//     demo1(int h)
//     {
//         cout<<h<<"parent constructor"<<endl;
//     }
//     int x;
//     int y;
//     void f1(){
//         cout<<"fun1 executed."<<endl;
//     }


// };

// class demo2: public demo1
// {
//     public:
//     demo2(int g) : demo1(g)
//     {
//         cout<<"child class constructor"<<endl;
//     }
//     int z;
//     void f2(){
//         cout<<"fun2 executed."<<endl;
//     }

// };
// int main() {
//     demo2 d1(6);
//     d1.z=55;
//     d1.x=23;
//     d1.y=27;
//     cout<<d1.z<<" "<<d1.x<<" "<<d1.y<<endl;
//     d1.f1();
//     d1.f2();

// }












//--------------------------------- hierarchical class constructor------------------. 

// #include <iostream>
// using namespace std;
// class vehicle
// {
//     int brake;
//     int oil;
//     int clutch;
//     public:
//     vehicle()
//     {
//         cout<<"parent class constructor";
//     }
// };

// class car :vehicle
// {
//     int four_tyre;
//     int sunroof;
//     public:
//     car()
//     {
//         cout<<"child1  class constructor";
//     }


// };
// class bike :vehicle
// {
//     int two_tyre;
//     public:
//     bike()
//     {
//         cout<<"\n"<<"child2 class constructor";
//     }


// };
// int main()
// {
//     bike b1;

// }













// #include <iostream>
// using namespace std;
// class samsung
// {
//     public:
//     void setmic()
//     {
//         cout<<"mic set by samsung.";

//     }


// };
// class oneplus
// {
//     public:
//     void setmic()
//     {
//         cout<<"mic set by samsung.";

//     }
// };
// class vivo : public samsung,oneplus   
// {


// };
// int main()
// {
//     vivo c1;
//     c1.setmic(); // due to ambiguity we cant call this function

// }

























// ~destructor --------------program -------------------

#include <iostream>
using namespace std;
class demo1
{
    public:
    ~demo1()
    {
        cout<<"destructor parent";
    }
    demo1(int h)
    {
        cout<<h<<"parent constructor"<<endl;
    }
    int x;
    int y;
    void f1(){
        cout<<"fun1 executed."<<endl;
    }


};

class demo2: public demo1
{
    public:
    ~demo2()
    {
        cout<<"destructor child";
        
    }
    demo2(int g) : demo1(g)
    {
        cout<<"child class constructor"<<endl;
    }
    int z;
    void f2(){
        cout<<"fun2 executed."<<endl;
    }

};
int main() {
    demo2 d1(6),d2(5),d3(7);
    d1.z=55;
    d1.x=23;
    d1.y=27;
    cout<<d1.z<<" "<<d1.x<<" "<<d1.y<<endl;
    d1.f1();
    d1.f2();

}

