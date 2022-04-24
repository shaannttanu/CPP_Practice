#include<iostream>
using namespace std;

struct employee{
    int eid;
    int age;
    float salary;
};
int main()
{
    struct employee emp;
    cout<<"Enter employee id : "<<endl;
    cin>>emp.eid;
    cout<<"Enter name : "<<endl;
    gets(emp.name);
    cout<<"************"<<endl;
    cout<<"Employee details : "<<endl;
    cout<<emp.eid<<endl;
    return 0;
}