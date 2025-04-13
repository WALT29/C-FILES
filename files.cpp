//=============================================================FILES IN C++====================================================================
//=============================================================================================================================================
/*
The <fstream> library allows us to work with files in c++
    -The library has 3 different classes(ofstream,ifstream,fstream)
        1)ofstream-Creates and writes files
        2)ifstream-reads from files
        3)fstream-combination of the ofstream and ifstream ;create,writes and reads files
*/

//======================= CREATE & WRITE FILES =============================
/*
    To create a file use the ofstream class ;
        ofstream MyFile("hello.txt")
    Define the file name in the object 
    use the insertion opperator to write into the file <<
    Remember to close the file once you are done ;since its a good practice and frees the memory

*/

//======================   READ FILES   ===================================
/*
    To read files use the ifstream
        ifstream MyReadFile("hello.txt")
    Use the while loop together with the getline(MyReadFile,string)function
    Remember to close the file once you are done ; since its a good practice and frees memory

*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //File creation
    ofstream MyFile("final.txt");
    MyFile << "Hello world";
    MyFile.close();

    //File reading
    ifstream MyReadFile("final.txt");
    string myText;
    while(getline(MyReadFile,myText)){
        cout<<myText;
    }


    return 0;
}

