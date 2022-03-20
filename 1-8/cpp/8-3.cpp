#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void zhuanhuan (string & zifu)
{
    for (int i = 0; i < zifu.size(); i++)
    {
        zifu[i]=toupper(zifu[i]);
    }
}
int main(int argc, char const *argv[])
{
    cout<<"enter"<<endl;
    string haha;
    getline(cin,haha);
    while (haha!="q")
    {
        zhuanhuan(haha);
        cout<<haha<<endl;
        cout << "Next string (q to quit): ";
        getline(cin, haha);
    }
    cout<<"bye"<<endl;
    return 0;
}
