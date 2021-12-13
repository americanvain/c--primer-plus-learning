#include <iostream>
using namespace std;

template <typename T>
T max5(T bijiao[5]);


int main(int argc, char const *argv[])
{
    int int_shuzu[5]={1,2,3,4,5};
    double dou_shuzu[5]={1.2,3.2,4.3,2.3,5.6};
    cout<<"int max="<<max5(int_shuzu)<<endl;
    cout<<"double max="<<max5(dou_shuzu)<<endl;

    return 0;
}

template <typename T>
T max5(T bijiao[5])
{
    T temp=bijiao[0];
    for(int i=1;i<5;i++)
    {
        if(bijiao[i]>temp)
        {
            temp=bijiao[i];
        }
    }
    return temp;
}