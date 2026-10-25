#include <iostream>
using namespace std;

class Bank
{

    int x,y;
public:
    virtual void roi ()=0;
Bank()
{
    cout<<"constructor of parent"<<endl;
}

};


class SA : public Bank
{
    public:
    void roi()
    {

    }
    SA()   

    {
        cout<<"constructor of child";
    }


};

int main()
{
    SA s1;
 
    

}