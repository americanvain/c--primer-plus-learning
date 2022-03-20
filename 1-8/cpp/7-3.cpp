#include <iostream>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void anzhi(box a)
{
    cout<<a.height<<a.length<<a.maker<<a.width<<a.volume;
}

void dizhi(box *a)
{
    a->volume=a->height*a->length*a->width;
}

int main(int argc, char const *argv[])
{
    box bb={"haha",19.2,12.3,15,0};
    anzhi(bb);
    dizhi(&bb);
    anzhi(bb);
    return 0;
}
