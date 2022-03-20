#include <iostream>
using namespace std;


double tiaohe(double a,double b)
{
    return 2*a*b/(a+b);
}
int main(int argc, char const *argv[])
{
    double a,b;
    cin>>a;
    cin>>b;
    cout<<tiaohe(a,b)<<endl;
    return 0;
}
