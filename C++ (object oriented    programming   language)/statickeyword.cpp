#include <iostream>
using namespace std;

class demo {
public:
    int x;
    int y;
    private:
    static int z; // Declaration of static member variable
    public:
    void f1()
    {
        z=55;
        cout<<z;
      

    }
    static void f2()  // bina object banay call kiya ha us me.
    {
        z=44;
        cout<<z;
    }
 };


// Definition of static member variable
int demo::z;


int main() {
    
    demo::f2(); 

    demo d1;
    d1.f1();
    // demo::f2();
    // demo d1, d2, d3;
    // d1.z = 75;
    // demo::z=54;
    // d2.z = 8;
    // d3.z = 12;
    // cout<<demo::z<<" "<<d1.z;

    return 0;
}





// C++ Static Data Members
// Static data members are class members that are declared using static keywords. 
//A static member has certain special characteristics which are as follows:

// Only one copy of that member is created for the entire class and is shared by all the objects of that class,-
//  no matter how many objects are created.
// It is initialized before any object of this class is created, even before the main starts.
// It is visible only within the class, but its lifetime is the entire program.
// Syntax:
// static data_type data_member_name;