#include <iostream>
#include <string>
using namespace std;
 
const int ArSize = 10;
void strcount(const string str)
{
    static int total = 0;
    int count = 0;
 
    cout << "\"" << str<< "\" contains \n";
    while (str[count])
    {
        count++;
    }
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
int main(void)
{
    string input;
 
    cout << "Enter a line:\n";
    getline(cin, input);
    while (cin)
    {
        strcount(input);
        getline(cin,input);
        cout<<"enter next line ! empyt for stop\n";
        if(input == "")
            break;
        
    }
 
    cout << "Bye\n";
    return 0;
}