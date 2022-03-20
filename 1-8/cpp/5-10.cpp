#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"enter:"<<endl;
    int num=0;
    cin >> num;
    for(int i=1;i<=num;i++)
    {
        int q=0;
        while(q<num-i)
        {
            cout<<".";
            q++;
        }
        q=0;
        while(q<i)
        {
            cout<<"*";
            q++;
        }
        cout<<endl;
    }
    return 0;
}
