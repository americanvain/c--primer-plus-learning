#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    cout<<"What is your first name?";
    char firstname[10];
    cin.getline(firstname,10);

    cout<<"What is your last name?";
    char lastname[10];
    cin.getline(lastname,10);

    cout<<"What letter grade do you deserve?";
    char grade;
    cin>>grade;
    grade = grade +1;
    cout<<"What is your age?";
    int age;
    cin>>age;

    cout<<"Name: "<<lastname<<","<<firstname<<"\n";
    cout<<"Grade: "<<grade<<"\n";
    cout<<"Age: "<<age;
    return 0;
}
