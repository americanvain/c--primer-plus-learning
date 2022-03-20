#include <iostream>
using namespace std;

double add(double a ,double b)
{
    return a+b;
}
double calculate(double a,double b,double (*pf)(double,double))
{
    return (*pf)(a,b);
}
int main(int argc, char const *argv[])
{
    double (*pf)(double,double);
    pf=add;
    cout<<"enter two num"<<endl;
    double num1,num2;
    cin>>num1>>num2;
    cout<<"add:"<<calculate(num1,num2,pf);

    return 0;

}
