#include<iostream>
#include<string>
using namespace std;

class Employee{
    static int count;
    string name;
    
    public:
        static void counter(void){
            count++;
        }
        void getdata(void);
        void showdata(void);

};
int Employee :: count;
void Employee ::getdata(){
    cout<<"Enter name of Employee "<<count+1<<endl;
    cin>>name;
    counter();
}

void Employee ::showdata(){
    cout<<"name of Employee is "<<name<<endl;
    
}
int main()
{
    Employee emp[3];
    for(int i=0;i<3;i++){
        emp[i].getdata();
        // Employee::counter();
        emp[i].showdata();
    }
    return 0;
}