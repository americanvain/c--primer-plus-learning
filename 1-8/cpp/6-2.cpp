#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
    double shuzu[10]={0};
    double sum=0;
    double average=0;
    int i=0;
    int count=0;
    int num=0;

    while ((cin>>shuzu[i]))
    {
        sum+=shuzu[i];
        i++;

        /* code */
    }
    average=sum/i;
    num=i;
    i=0;
    while (i<num)
    { 
        if(shuzu[i]<average)
        {
            count++;
        }
        i++;
    }
    cout<<average<<endl;
    cout<<count;
    
    return 0;
}
