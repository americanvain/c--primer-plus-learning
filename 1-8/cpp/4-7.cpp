#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    struct 
    {
        string name;
        double diameter;
        double weight;
    }pizzainfo;
    
    cout<<"Enter name:\n";
    getline(cin,pizzainfo.name);
    cout<<"Enter diameter:\n";
    cin>>pizzainfo.diameter;
    cout<<"Enter weight:\n";
    cin>>pizzainfo.weight;   

    cout<<"it's name :"<<pizzainfo.name<<"\nit's diameter:"<<pizzainfo.diameter<<"\nit's weight :"<<pizzainfo.weight;
    
    return 0;
}
