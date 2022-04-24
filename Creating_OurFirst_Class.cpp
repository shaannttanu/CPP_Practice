#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:                   //PRIVATE MEMBERS (can't be accessed from outside the class)
        int eID;
        string name;
        int salary();

    public:
        void showdata();       //PUBLIC MEMBERS (can be accessed by objects from outside the class)
        void getdata();
};

void Employee :: getdata(){
    cout<<"Enter Name of Employee : "<<endl;
    getline(cin,name);
    cout<<"Enter ID of Employee : "<<endl;
    cin>>eID;
}

int Employee :: salary(){
    if(eID>10 && eID<=20){
        return 35000;
    }
    else if(eID>21 && eID<=30){
        return 45000;
    }
    else if(eID>31 && eID<=40){
        return 55000;
    }
    else if(eID>41 && eID<=50){
        return 65000;
    }
    else if(eID>51 && eID<=60){
        return 80000;
    }
    else if(eID>61 && eID<=70){
        return 100000;
    }
    else{
        return 120000;
    }
}

void Employee :: showdata(){
    cout<<endl;
    cout<<"NAME : "<<name<<endl;
    cout<<"ID : "<<eID<<endl;
    cout<<"SALARY : "<<salary()<<endl;
}

int main()
{
    Employee e1;
    e1.getdata();
    e1.showdata();
    return 0;
}