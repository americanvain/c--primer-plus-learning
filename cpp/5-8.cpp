#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    const int ArSize = 256;
    char str[ArSize];
    unsigned int count = 0;

    cout << "Enter words (to stop, type the word done):" << endl;
    while (cin >> str)
    {
        if (0 == strcmp("done", str))
        {
            break;
        }
        ++count;
    }
    cout << "You entered a total of " << count << " words." << endl;

    return 0;
}
// int main(int argc, char const *argv[])
// {
//     int i=0;
//     char ch;
//     char chs[10];
//     int count =0;
//     while(strcmp(chs,"done")!=0)
//     {
//         chs[i]=cin.get();
//         if(chs[i]==32)
//         {
//             i=0;
//             count++;
//             memset(chs,'\0',sizeof(chs));
//         }
//         else
//             i++;
//     }
//     cout<<"\n"<<count;
//     return 0;
// }
