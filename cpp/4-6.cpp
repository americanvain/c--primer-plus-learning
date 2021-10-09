#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
   string brandname;
   double weight;
   int calorie;
};

int main(int argc, char const *argv[])
{
    CandyBar snack[3] =
    {
        {
        "Mocha Munch",
        2.3,
        350
        },
        {
        "zxf q",
        2.3,
        350
        },
        {
        "zxf w",
        2.3,
        350
        }
    };
    cout<<snack[0].brandname<<"\n";
    cout<<snack[0].weight<<"\n";
    cout<<snack[0].calorie<<"\n";
    cout<<snack[1].brandname<<"\n";
    cout<<snack[1].weight<<"\n";
    cout<<snack[1].calorie<<"\n";
    cout<<snack[2].brandname<<"\n";
    cout<<snack[2].weight<<"\n";
    cout<<snack[2].calorie<<"\n";
    return 0;
}
