#include <iostream>
#include <string>

using std::cout;
using std::cin;

int main(int argc, char const *argv[])
{
    long long pt=0;
    long long pt1=0;
    cout<< "Enter the World's population :  ";
    cin >> pt ;
    cout <<'\n';
    cout<< "Enter the CHI's population :  ";
    cin >> pt1 ;
    double ration1 = double (pt1)/(pt)*100;
    cout <<"\nThe population of the US is "<<ration1<< "% of the world population.";
    return 0;
} 
