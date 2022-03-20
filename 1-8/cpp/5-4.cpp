#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double a_v=100;
    double b_v=100;
    const double par_a=0.1;
    const double par_b=0.05;
    int count=0;
    while(a_v>=b_v)
    {
        a_v+=10;
        b_v*=(1+par_b);
        count++;
    }
    cout<<count;
    return 0;
}
