#include <iostream>

#include <string>

using namespace std ;

int main(int argc, char *argv[])
{
    const int ArSize = 20;
    string name;
    string dessert;
    cout<<"Enter your name:\n";
    getline(cin,name);
    cout<<"Enter your desert:\n";
    getline(cin,dessert);
    cout<<"I have delicious "<<dessert;
    cout<<" for "<<name<<".\n";
    
    return 0;

}
