#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    while (1)
    {
        cin.get(ch);
        switch (ch)
        {
            case 'c':
                cout<<"car";
                break;
            case 'p':
                cout<<"pi";
                break;
            case 't':
                cout<<"tree";
                break;
            case 'g':
                cout<<"game";
                break;           
            
            default:
                cout<<"enter word";
        }
        cin.get();
    }
    
    return 0;
}
