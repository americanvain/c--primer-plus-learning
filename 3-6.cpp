#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double ymiles,galon=0;

    cout<<"miles?:\n";
    cin>>ymiles;
    cout<<"galon?:\n";
    cin>>galon;
    double result=0;
    result=ymiles/galon ;
    cout<<result;
    return 0;
}
