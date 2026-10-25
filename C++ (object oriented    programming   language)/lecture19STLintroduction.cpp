// #include<iostream>
// #include<array>
// using namespace std;
// int main()
// {
//     array<int,5>a1 {11,22,33,44,55};
//     array<int, 5> a2 {100, 90, 80, 70, 60};

//     a1.swap(a2);

//     // array<string,6>a2;
//     // a2.fill("AAA");
//     int i;
//     for(i=0;i<a1.size();i++)
//     {
//         cout<<a1[i]<<endl;
//     }
//     // cout<<a1.at(3);        // ate function
//     // cout<<a1[2];           // operator function
//     // cout<<a1.front();      // front function
//     // cout<<a1.back();       // back function
// }




















#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    void setdata(int p, int q)
    {
        x=p; y=q;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    pair<int,string>p1;
    pair<float,int>p2;
        p1=make_pair(45,"shyam");
    p2=make_pair(69.50,100);

    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;




    pair<int,A>p3;
    A a1;
    a1.setdata(66,77);
    p3=make_pair(55,a1);   
    cout<<p3.first<<" ";
    A a2=p3.second;
    a2.display();


 
 }