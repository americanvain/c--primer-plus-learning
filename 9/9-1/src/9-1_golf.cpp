#include <iostream>
#include <cstring>
#include "9-1_golf.h"
using namespace std;

void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g)
{
    cout << "enter name" << endl;
    cin.getline(g.fullname, Len);
    if (strcmp(g.fullname, "") == 0)
    {
        return 0;
    }
    cout << "enter hc";
    cin >> g.handicap;
    cin.get();
    return 1;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    cout << g.fullname << endl;
    cout << g.handicap << endl;
}