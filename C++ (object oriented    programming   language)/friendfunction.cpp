// we can access all thing in privat all by some method .
// #include <iostream>
// using namespace std;
// class demo
// {
//     int x;
//     int y;
//     public:
//     void fun5()
//     {
//         x=5;
//         y=8;
//         cout<<x+y<<"fun5 executed";
//     }

// };
// void fun1()
// {
//     cout<<"fun1 executed";
// }    


// int main()
// {
//     demo d1;
//     d1.fun5();




// }


















//---------------------------------friend function----------------------------
// #include <iostream>
// using namespace std;
// class demo2;
// class demo1
// {
//     int x;
//     // int y;
// friend void fun1(demo1 x1,demo2 x2);  
// };
// class demo2
// {                                                                                   // not correct 
//     int y;
//     friend void fun1(demo1 x1,demo2 x2); 
// };
// void fun1(demo1 x1,demo2 x2)
// {

//     x1.x=6;
//     x2.y=8;
//     cout<<x1.x+x2.y;
//     // demo1 d1;
//     // demo2 d2;
//     // d1.x=7;
//     // d1.y=8;
//     // cout<<d1.x+d2.y;   
         
   
// }    


// int main()
// {
//    demo1 d1;
//    demo2 d2;
// //    fun1(d1,d2);

//    return 0; 

// }





// ---------------------------------same--------------------------------------------same --same------




// #include <iostream>
// using namespace std;

// class demo2; // Forward declaration of class demo2

// class demo1 {
//     int x;
//     friend void fun1(demo1 x1, demo2 x2);
// };

// class demo2 {
//     int y;
//     friend void fun1(demo1 x1, demo2 x2);
// };

// void fun1(demo1 x1, demo2 x2) {
//     x1.x = 6;
//     x2.y = 8;
//     cout << x1.x + x2.y;
// }

// int main() {
//     demo1 d1;
//     demo2 d2;
//     fun1(d1, d2); // Call to fun1 to demonstrate friendship
//     return 0;
// }













#include <iostream>
using namespace std;


class demo1 {
    public:
        void fun1()
    {
        

    }

    void fun2()
    {

    }

    void fun3()
    {

    }


  
};

class demo2 {
    int x;
    public:
    friend class demo1;
    /*friend void demo1 :: fun1();
    friend void demo1 :: fun2();
    friend void demo1:: fun3*/
  

};

int main() {

    return 0;
}