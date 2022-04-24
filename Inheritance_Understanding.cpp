#include<iostream>
using namespace std;
//IMPORTANT NOTES : 

/*  
    Syntax of Inheritance : 

    class {{Derived-class-name}} : {{visibility mode}} {{Base-class-name}}

    1. Only Public members (data members + member functions ) of base class are inherited.
       Private Members are NEVER inherited.

    2. VISIBILITY MODE : 

        ---> By Default, the visibility mode is private.
        
        ---> Using Public visibility mode : All the public members of base class become PUBLIC members 
             of derived class.

        ---> Using Public visibility mode : All the public members of base class become PRIVATE members 
             of derived class.
*/
class Employee{
    private:
    public:
        int id;
        float salary;
        Employee(int x){
            id=x;
            salary=65000.34;
        }
        Employee(){
            cout<<"CONSTRUCTOR OF BASE CLASS EXECUTED!"<<endl;
        }
};

class Programmer : public Employee{
    public:
        Programmer(int y){
            id=y;
            salary=12000;
            cout<<"Derived class constructor!"<<endl;
        }
        void show(void){
            cout<<"ID : "<<id<<" "<<"SALARY : "<<salary<<endl;
        }
};

int main()
{
    Programmer p(100);
    p.show();
    cout<<p.id; //CAN BE WRITTEN AS INHERITANCE VISIBILITY MODE IS PUBLIC
    return 0;
}