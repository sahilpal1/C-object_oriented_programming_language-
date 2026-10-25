//#include<iostream>
// using namespace std;

// void fun1 (int &x ,int &y)
// {
//     x++;
//     y++;
//     x++;
//     cout<<x+y<<endl;

// }

// int main(){
// int p=3 ,q =2;
// fun1(p,q);
// cout<<p+q;
// }












// #include<iostream>
// using namespace std;

// void fun1 (int &x ,int &y, int z, int w)
// {
//     x--;
//     y++;
//     y--;
//     z++;
//     z++;
//     w++;
//     cout<<x+y<<endl;

// }

// int main(){
// int p=1 ,q =6, r=4, s=7;
// fun1(p,q,r,s);
// cout<<p+q+r+s;
// }










// copy constructor .cpp
#include<iostream>
using namespace std;
class demo
{
    int p,q;    // instance member  variable 
public:
demo(int x ,int y)  
{
    p=x; q=y;

}
demo (demo &j1)
{
    j1.p++;
    j1.q++;
    p=j1.p;
    q=j1.q;
}
void display ()
{
    cout<<p<<" "<<q<<endl;
}
};
int main()
{
    demo d1(4,5),d2(7,9),d3(d1);
    d3.display();
    d1.display(); 

}