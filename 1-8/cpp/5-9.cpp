#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"enter";
    string a;
    int count=0;
    while (cin>>a)
    {
        if(a=="done")
        {
            break;
        }
        count++;
        /* code */
    }
    cout<<count;
    
    return 0;
}
