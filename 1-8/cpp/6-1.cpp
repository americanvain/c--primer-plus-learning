#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
    char a[20]={0};
    char ch;
    while (1)
    {
        ch=cin.get();
        if(ch=='@')
        {
            break;
        }
        if(!isdigit(ch))
        {
            if(islower(ch))
            {
                ch=toupper(ch);
            }
            else 
            {
                ch=tolower(ch);
            }
            cout<<ch; 
        }
    }
    return 0;
}
