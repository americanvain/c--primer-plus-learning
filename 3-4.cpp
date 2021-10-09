#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    long num_sec;
    std::cout<< "Enter the number of seconds:  ";
    std::cin >> num_sec;

    int day,hour,minute,second;
    const int parameter1 = 24*60*60;
    const int parameter2 = 60*60;
    const int parameter3 = 60;
    day = num_sec/parameter1;
    num_sec = num_sec%parameter1;
    hour = num_sec/parameter2;
    num_sec = num_sec%parameter2;
    minute = num_sec/parameter3;
    second = num_sec%parameter3;
    std::cout<< num_sec <<"="<<day<<"days"<<hour<<"hours"<<minute<<"minutes"<<second<<"seconds";
    return 0;
}
