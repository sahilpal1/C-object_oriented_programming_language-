/*Derived Classes: A Derived class is defined as the class derived from the base class.
Syntax: 

class  <derived_class_name> : <access-specifier> <base_class_name>
{
        //body
}
Where
class      — keyword to create a new class
derived_class_name   — name of the new class, which will inherit the base class
access-specifier  — either of private, public or protected. If neither is specified, PRIVATE is taken as default
base-class-name  — name of the base class
Note: A derived class doesn’t inherit access to private data members. However, it does inherit a full parent object, which contains any private members which that class declares.

Example:
1. class ABC : private XYZ              //private derivation
            {                }
2. class ABC : public XYZ              //public derivation
            {               }
3. class ABC : protected XYZ              //protected derivation
            {              }
4. class ABC: XYZ                            //private derivation by default
{            }

Note:
o When a base class is privately inherited by the derived class, public members of the base class becomes the private members of the derived class and therefore, the public members of the base class can only be accessed by the member functions of the derived class. They are inaccessible to the objects of the derived class.
o On the other hand, when the base class is publicly inherited by the derived class, public members of the base class also become the public members of the derived class. Therefore, the public members of the base class are accessible by the objects of the derived class as well as by the member functions of the derived class.
 
*/





// Example: define member function without argument within
// the class
 
#include <iostream>
using namespace std;
 
class Person {
    int id;
    char name[100];
 
public:
    void set_p()
    {
        cout << "Enter the Id:";
        cin >> id;
        cout << "Enter the Name:";
        cin >> name;
    }
 
    void display_p()
    {
        cout << endl <<"Id: "<< id << "\nName: " << name <<endl;
    }
};
 
class Student : private Person {
    char course[50];
    int fee;
 
public:
    void set_s()
    {
        set_p();
        cout << "Enter the Course Name:";
        cin >> course;
        cout << "Enter the Course Fee:";
        cin >> fee;
    }
 
    void display_s()
    {
        display_p();
        cout <<"Course: "<< course << "\nFee: " << fee << endl;
    }
};
 
int main()
{
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}















































