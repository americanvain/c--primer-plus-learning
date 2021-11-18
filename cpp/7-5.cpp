#include <iostream>
using namespace std;

int jiecheng(int a)
{
    int re=a;
    if(a==0)
    {
        return 1;
    }
    else
    {
        while (a>1)
        {
            a--;
            re*=a;
        }
    }
    return re;
}

int digui(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return a*digui(a-1);
    }
}
int main(int argc, char const *argv[])
{
    int num=0;
    int result=1;
    cin>>num;
    // cout<<jiecheng(num);
    cout<<digui(num);
    return 0;
}
