#include <iostream>
using namespace std;

void p5_3(void)
{
    int sum = 0;
    int num = 0;

    while (1)
    {
        cout << "Enter a number( 0 to exit): ";
        cin >> num;
        if (num == 0)
        {
            break;
        }
        sum += num;
        cout << "Until now, the sum of the number you inputed is " << sum << endl;
    }

    cout << "Done." << endl;

    return;
}
int main(int argc, char const *argv[])
{
    cout<<"Enter num"<<endl;
    int ch;
    ch = getchar();
    int result=0;
    if(ch==30)
    {
        cout<<result;
    }
    else{
        do
        {
            result += ch;
            cout<<ch<<endl<<result;
        } while ((ch=getchar())!=30);
        

    }
    return 0;
}
