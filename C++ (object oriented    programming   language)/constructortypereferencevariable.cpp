#include<iostream>
using namespace std;
class samsung1
{

    int m;
    int s;
public:
    samsung1(int x, int y)      // parematarized constructor
     {
        m=x;
        s=y;
    }

    samsung1()                   // default constructor
    {
        m=0;
        s=0;
   

    }


     samsung1(int w)           // parematarized constructor      
    {
        m=w;
        s=w;

    }
    
    // void setdata ()
    // {
    //     m=5;
    //     s=2;
    // }
    void display()
    {
        cout<<m<<" "<<s<<endl;
    }
    void display(int u)     // function overloading
    {}

};
int main() {
    samsung1 s1(5,2),s2,s3=66;
    //s1.setdata();
    s2.display(); 
    s1.display(); 
    s3.display(); 
    // s4.display(); 


    










//  s1.m=55;    /public hota to use kar sakta ha
//    s1.s=78;


}