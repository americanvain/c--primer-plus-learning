#include <iostream>
#include <string>
using namespace std;

struct car
{
    string band;
    int year_made;
};

int main(int argc, char const *argv[])
{
    int num=0;
    cout<<"enter the num of the car\n";
    cin>>num;
    cin.get();
    car *pt=new car [num];
    for(int i=0;i<num;i++)
    {
        cout<<"enter the band";
        getline(cin,pt[i].band);
        cout<<"enter the year made";
        cin>>pt[i].year_made;
        cin.get();
    }
    for(int i=0;i<num;i++)
    {
        cout<<pt[i].year_made<<"   "<<pt[i].band<<endl;
    }
    return 0;
}
