// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     ifstream fin;
//     fin.open("a.txt");
//     char ch=fin.get();
//     cout<<ch;

//     ch=fin.get();
//     cout<<ch;

//     ch=fin.get();
//     cout<<ch;


// cout<<fin.tellg();       // TELLG program 
// fin.seekg(-5,ios_base::end);

// cout<<fin.tellg();




// }
















#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("a.txt",ios::app |ios::ate);
        cout << fout.tellp() << endl; // Output the current put pointer position
    fout<<"SeeKho";
    fout.seekp(-15,ios_base::end);
        cout<<fout.tellp();      

    fout.close(); // Close the file 

    return 0; // Return 0 to indicate successful execution

  




}