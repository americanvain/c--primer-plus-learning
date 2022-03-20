#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout<<"Enter two num"<<std::endl;
    int a ,b;
    std::cin>>a;
    std::cin>>b;
    int result=0;
    if (a>b)
        {
            int temp=0;
            temp=a;
            a=b;
            b=temp;
        }
    while(a<=b)
    {
        result = result +a;
        a++;
    }
    std::cout<<result;
    return 0;
}