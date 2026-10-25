// -------------------------------------------program of tuple--------------------------
// #include<iostream>
// #include<tuple>
// using namespace std;
// int main()
// {
//     tuple<int,float,string,int,string>t1;
//     t1=make_tuple(67,81.45,"sahil",85,"ajay5");
//     cout<<get<0>(t1)<<endl;
//     cout<<get<1>(t1)<<endl;
//     cout<<get<2>(t1)<<endl;
//     cout<<get<3>(t1)<<endl;
//     cout<<get<4>(t1)<<endl;

    
// return 0;

// }





















// ---------------------------------program of vector------------------------------------------
#include<iostream>
#include<vector>
using namespace std;
int main()
{
//    vector<int>v1;
//    vector<float>v2(5);
   vector<char>v3(4,'T');
   v3.push_back('v');       // answer5
vector<char>:: iterator i1=v3.begin();
v3.insert(i1+4,'M');                   // i1 show that 4 position ka bad me " M " ayga 
while(i1!=v3.end())                    
{
    cout<<*i1<<" ";
    i1++;
}



//    v3.pop_back();           // answer 4
//    v3.pop_back();           // answer 3
//    cout<<v3.size();         // answer3
//    cout<<v3.at(0);                // T answer (at mean first par kya rakha ha T)
//    cout<<v3.back();                 // answer ( back mean last me kya rakha ha T)
//    cout<<v3.front();             // answer (front mean first me kya rakha ha T ha bas)





//    cout<<v3.capacity();           //answer 8
//    cout<<v3.size();              // answer 5


//    int i;
//    for(i=0;i<v3.size();i++)
//    {
//     cout<<v3 [i]<<endl;
//    }

}






