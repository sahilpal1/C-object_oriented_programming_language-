// program of list
// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     list<int> l1{22, 33, 44, 55, 66, 77, 89, 90};
//     l1.pop_back();              // 90 should be Delete
//     l1.pop_front();             // 22 should be Delete
//     l1.push_back(88);  // Adds 88 to the end of the list
//     l1.push_front(11); // Adds 11 to the front of the list

//     list<int>::iterator i1 = l1.begin();
//     while (i1 != l1.end()) {
//         cout << *i1 << " ";
//         i1++;
//     }

//     cout << endl; // For better formatting of the output

//     return 0;
// }































#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int,string>m1;
    m1[100]="sahil";       // method 1
    m1[105]="ajay";
    m1[103]="karan";
    m1[109]="chetan";
    m1[101]="virat";
 
    map<string,int>m2{{"ajit",34},{"amit",35},{"neha",90}};   // method 2



    // cout<<m1[100];
    map<string,int> ::iterator i1=m2.begin();
     m1.insert(pair<int,string>{102,"kedar"});       // inster row
    while(i1!=m2.end())
    {
        cout<<i1->first<<" "<<i1->second<<endl;
        i1++;
    }

}