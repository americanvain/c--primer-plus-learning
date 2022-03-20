#ifndef _9_1_golf_h
#define _9_1_golf_h

const int Len = 80;
struct golf
{
    char fullname[Len];
    int handicap;
};
 
void setgolf(golf & g, const char * name, int hc);
int setgolf(golf & g);
void handicap(golf & g, int hc);
void showgolf(const golf & g);

#endif