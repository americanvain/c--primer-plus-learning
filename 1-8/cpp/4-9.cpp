#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    struct CandyBar
    {
        string brandname;
        double weight;
        int calorie;
    };
    CandyBar *zxf = new CandyBar [3];
    zxf[0]={"haha",9.2,230};
    zxf[1]={"qwe",83.2,89};
    zxf[2]={"qwe32",81.9,31};
    cout<<zxf[0].brandname<<"\n"<<zxf[0].weight<<"\n"<<zxf[0].calorie<<"\n";
   
    cout<<zxf[1].brandname<<"\n"<<zxf[1].weight<<"\n"<<zxf[1].calorie<<"\n";

    cout<<zxf[2].brandname<<"\n"<<zxf[2].weight<<"\n"<<zxf[2].calorie<<"\n";

    return 0;
}
