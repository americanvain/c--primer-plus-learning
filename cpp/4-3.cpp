#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
    char ming[20]={0};
    char xing[20]={0};
    char xingming[20]={0};

    cout<<"Enter your last name: \n";
    cin>>xing;
    cout<<"Enter your first name: \n";
    cin>>ming;  

    strcpy(xingming,xing);
    strcat(xingming,", ");
    strcat(xingming,ming);

    cout<<xingming;
    return 0;
}
