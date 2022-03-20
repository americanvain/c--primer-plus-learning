#include <iostream>

using namespace std;

int Fill_array(double *a,int len)
{
    cout<<"enter zhi"<<endl;
    int count=0;
    while (cin>>*a)
    {
        if(count>=len)
        {
            break;
        }
        a++;
        count++;
    }
    cout<<"total num\t"<<count<<endl;
    return count;
}
void Show_array(double *a,int len)
{
    for(int i=0;i<len;i++)
    {
        if(isdigit(*a))
        {
            break;
        }
        cout<<*a<<"\t";
        a++;
    }
}
void Reverse_array(double *a,int len)
{
    double temp=0;
    for (int i = 0; i <= (len-1)/2; i++)
    {
        temp=a[i];
        a[i]=a[len-i];
        a[len-i]=temp;
    }
}
int main(int argc, char const *argv[])
{
    const int arsize=5;
    double shuzu[arsize]={0};
    int len=Fill_array(shuzu,arsize);
    Show_array(shuzu,len);
    Reverse_array(shuzu,len-1);
    Show_array(shuzu,len);
    return 0;
}
