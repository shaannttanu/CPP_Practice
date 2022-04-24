#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    int age=10,standard=3;
    string a,s;
    string name="shantanu";

    stringstream Age,Standard;

    Age<<age;
    Standard<<standard;

    a=Age.str();
    s=Standard.str();

    cout<<a<<","<<s<<","<<name;
    return 0;
}