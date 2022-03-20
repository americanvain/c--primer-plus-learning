#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double income=0;
    double tax=0;
    const double lev1=35000;
    const double lev2=15000;
    const double lev3=5000;
    while ((cin>>income)&&income>0)
    {
        if(income>lev1)
        {
            tax+=(income-lev1)*0.2;
            income=lev1;
        }
        if(income>lev2)
        {
            tax+=(income-lev2)*0.15;
            income=lev2;
        }
        if (income>lev3)
        {
            tax+=(income-lev3)*0.1;
        }
        cout<<tax<<endl;
    }
    

    return 0;
}
