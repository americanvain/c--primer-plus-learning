#include <iostream>
#include <array>
using namespace std;

const int ArSize = 100;
void p5_2(void)
{
    array<long double, ArSize+1> factorials;
    factorials[0] = factorials[1] = 1.0;
    for (int i = 2; i <= ArSize; i++)
    {
        factorials[i] = i * factorials[i - 1];
    }
    for (int i = 0; i <= ArSize; i++)
    {
        cout << i << "! = " << factorials[i] << endl;
    }

    return;
}

int main(int argc, char *argv[])
{
    std::array <long double ,101> fact;
    fact[1]=fact[0]=1.0;
    for (int i=2;i<=100;i++)
        fact[i]=fact[i-1]*i;
    cout<<fact[100];
    //p5_2();
    return 0;
}
