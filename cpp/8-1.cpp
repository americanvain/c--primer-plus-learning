#include <iostream>
using namespace std;

void daying(char const * a,int time=0)
{
    static int co=0;
    co++;
    if(time==0)
    {
        cout<<a<<endl;
    }
    else
    {
        while (co)
        {
            cout<<a<<endl;
            co--;
        }
    }
    
}
int main(int argc, char const *argv[])
{
    char const *zifuchuan = "hello world";
    daying(zifuchuan);
    daying(zifuchuan);
    daying(zifuchuan);
    daying(zifuchuan,9);
    return 0;
}
 