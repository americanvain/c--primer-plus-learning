#include <iostream>
#include <array>

using namespace std;

int main(int argc, char *argv[])
{
    array<double, 3> grade;
    cin>>grade[0];
    cin>>grade[1];
    cin>>grade[2];
    cout<<double((grade[0]+grade[1]+grade[2])/3);

    return 0
    ;
}
