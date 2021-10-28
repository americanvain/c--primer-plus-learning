#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream infile;
    infile.open("helloword.cpp");
    int count=0;
    char ch;
    infile.get(ch);
    while(infile.good())
    {
        count++;
        infile.get(ch);
    }
    if(infile.eof())
    {
        cout<<"end reaches"<<endl;
    }
    cout<<count;
    infile.close();
    return 0;
}
