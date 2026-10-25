// #include<iostream>
// #include<fstream>
// using namespace std;

// int main()
// {
//     ofstream f1;
//     f1.open("a.txt",ios::app);
//     f1<<"CoDing with sahil pal";
//     f1.close();
// }






















#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    // fstream f1;
    // f1.open("a.txt",ios::out);        // jo file me ha (a.txt) file me jo vo delet ho gayga(::out sa)
    // f1<<"Bye";
    // f1.close();



    fstream f1;
    f1.open("a.txt",ios::app);           // isme app used kar ka jo phela bhi ha or uska aga wali bhi print ho gay ha 
    f1<<",hi";                             
    f1.close();

    char z;
    f1.open("a.txt",ios::in);          // isme picha ka bhi phicha wala bhi print ho gay ha 
    while(!f1.eof())
    { 
        z=f1.get();
        cout<<z;
    }


    // ifstream fin;
    // char x ;    // Ensure x is declared with a proper size
    // fin.open("a.txt");

    // x=fin.get(); // Read a line of text from the file into x              // only one word print 
    // cout << x ; // Print the content of x 


    // while(!fin.eof())
    // {
    //       x=fin.get(); // Read a line of text from the file into x              // all word print 
    // cout << x ; 
    // }

    



    // fin >> x; // Read data from the file into x      all file me read karni ha to ya ha
    // cout << x << endl; // Print the content of x

    // fin.close(); // Close the file

    return 0; // Return 0 to indicate successful execution
}    





