#include <iostream>
#include "9-1_golf.h"
using namespace std;
int main(int argc, char const *argv[])
{
    golf ann;
    setgolf(ann, "Annfd Birdfree", 24);
    showgolf(ann);
    golf g[3];
    int i = 0;
    while ((i < 3) && (setgolf(g[i])))
    {
        showgolf(g[i]);
        cout << "Next golf:\n";
        i++;
    } 
    golf leo;
    setgolf(leo, "Leonardo Liu", 28);
    handicap(leo, 1);
    showgolf(leo);
    return 0;
}
