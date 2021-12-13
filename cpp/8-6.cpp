#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T bijiao[],int n);
template <> char* maxn<char *>(char *zifu[],int n);


int main(int argc, char const *argv[])
{
    int arr1[6] = { 1, 2, 3, 4, 5, 6 };
    double arr2[4] = { 1.5, 8.66, 7.773, 0.4 };
    int max1;
    double max2;
    max1 = maxn(arr1, 6);
    max2 = maxn(arr2, 4);
    char * arr3[5] = { (char*)"one", (char*)"two", (char*)"three", (char*)"four", (char*)"five" };
    char * max3;
    max3 = maxn(arr3, 5);
    cout << "The biggest number of the first array is " << max1 << endl;
    cout << "The biggest number of the second array is " << max2 << endl;
    cout << "The longest address of the third array is " << &max3 << endl;
    cout << "Bye." << endl;

    return 0;
}

template <typename T>
T maxn(T bijiao[],int n)
{
    T temp=bijiao[0];
    for(int i=1;i<n;i++)
    {
        if(bijiao[i]>temp)
        {
            temp=bijiao[i];
        }
    }
    return temp;    
}
template <> char* maxn<char *>(char *zifu[],int n)
{
    int temp_c=strlen(zifu[0]);
    int temp_n=1;
    for(int i=1;i<n;i++)
    {
        if(strlen(zifu[i])>n)
        {
            temp_c=strlen(zifu[i]);
            temp_n=i;
        }
    }
    return zifu[temp_n];
}