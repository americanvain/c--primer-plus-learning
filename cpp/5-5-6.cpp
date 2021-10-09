#include <iostream>
using namespace std;


void p5_6(void)
{
    int num2[3][12];
    int result=0;
    char const *month[12]={"january","feb","march","apr","may","jun","july","aug","sep","oct","nov","dec"};

    for(int n=0;n<3;n++)
    {
        cout<<(n+1)<<"year:\n";
        for(int i=0;i<12;i++)
        {
            cout<<*(month+i)<<"is"<<endl;
            cin>>num2[n][i];
            result+=num2[n][i];

        }
    }
    cout<<"result:"<<result;

}
int main(int argc, char const *argv[])
{
    // char const *month[12]={"january","feb","march","apr","may","jun","july","aug","sep","oct","nov","dec"};
    // int num[12];
    // int result=0;
    // for(int i=0;i<12;i++)
    // {
    //     cout<<*(month+i)<<"is"<<endl;
    //     cin>>num[i];
    //     result+=num[i];

    // }
    // cout<<"result:"<<result;
    p5_6();
    return 0;
}
