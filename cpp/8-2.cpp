#include <iostream>

using namespace std;

struct CandyBar
{
    char *brand;
    double weight;
    int calo;
};
CandyBar& chushihua(CandyBar &,const char*,const double,const int);
void show(CandyBar &showcandy);
int main(int argc, char const *argv[])
{
    CandyBar haha;
    show(chushihua(haha,"Milll haha",2.85,350));
    return 0;
}

CandyBar& chushihua(CandyBar &candy,char const *name,const double w,const int c)
{
    candy.brand=(char*)name;
    candy.weight=w;
    candy.calo=c;
    return candy;
}
void show(CandyBar &showcandy)
{
    cout<<showcandy.brand<<endl;
    cout<<showcandy.weight<<endl;
    cout<<showcandy.calo<<endl;
}