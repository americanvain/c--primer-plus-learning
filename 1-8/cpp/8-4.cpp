// 8.4.cpp: 定义控制台应用程序的入口点。
//
 
#include <iostream>
#include <cstring>
using namespace std;
 
struct stringy
{
    char * str;
    int ct;
};

void set(stringy &b,const char *s);
void show(stringy &b,int time=1);
void show(const char * b,int time =1);
int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void set(stringy &b,const char *s)
{
    b.ct=strlen(s)+1;
    // b.str= new char [b.ct];
    // strcpy(b.str,s);
    b.str=(char *)s;
}

void show(stringy &b,int time)
{
    for(int i=time;i;i--)
    {
        cout<<b.str<<endl;
    }
}
void show(const char * b,int time)
{
    for(int i=time;i;i--)
    {
        cout<<b<<endl;
    }
}