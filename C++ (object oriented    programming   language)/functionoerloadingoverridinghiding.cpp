#include <iostream>
using namespace std;
class Example 
{
    public:
    void fun1()
    {

    }
       void fun1(int x)
    {

    }
    virtual void sum1()        // virtual function 
        {
            cout<<"Old tech";

        }
    void f1()
    {

    }
};
class demo :public Example
    {
        public:
        void f1(int u)
        {


        }
        void sum1()
        {
            cout<<"New tech";
        }

    };


int main()
{
    // demo s1;
    // s1.f1(6 );
    // s1.sum1();
    Example *e1;           // with the helip of pointer in virtual function 
    demo s1;               // with the helip of pointer in virtual function 
    e1=&s1;                // with the helip of pointer in virtual function 
    e1->sum1();            // with the helip of pointer in virtual function 


    return 0;
}