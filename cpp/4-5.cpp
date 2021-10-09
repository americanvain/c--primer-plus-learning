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
    CandyBar snack =
    {
        "Mocha Munch",
        2.3,
        350
    };
    cout<<snack.brandname<<"\n";
    cout<<snack.weight<<"\n";
    cout<<snack.calorie<<"\n";
    return 0;
}
