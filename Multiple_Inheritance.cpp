#include <iostream>
using namespace std;

// Syntax for inheriting in multiple inheritance
// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };

class Base2{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
    Base2(){
        cout<<"BASE 2 CONSTRUCTOR!"<<endl;
    }
    ~Base2(){
        cout<<"DESTRUCTOR 2"<<endl;
    }
};
class Base1{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
    Base1(){
        cout<<"BASE 1 CONSTRUCTOR!"<<endl;
    }
    ~Base1(){
        cout<<"DESTRUCTOR 1"<<endl;
    }
};
class Base3{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
    Base3(){
        cout<<"BASE 3 CONSTRUCTOR!"<<endl;
    }
    ~Base3(){
        cout<<"DESTRUCTOR 3"<<endl;
    }
};

class Derived :  public Base1,public Base2, public Base3
{
    public: 
        void show(){
            cout << "The value of Base1 is " << base1int<<endl;
            cout << "The value of Base2 is " << base2int<<endl;
            cout << "The value of Base3 is " << base3int<<endl;
            cout << "The sum of these values is " << base1int + base2int + base3int << endl;
        }
        Derived(){
            cout<<"Constructor derived"<<endl;
        }
        ~Derived(){
            cout<<"dersructor derived"<<endl;
        }
};
/*
The inherited derived class will look something like this:
Data members:
    base1int --> protected
    base2int --> protected

Member functions:
    set_base1int() --> public
    set_base2int() --> public
    set_show() --> public
*/
int main()
{
    Derived harry;
    harry.set_base1int(25);
    harry.set_base2int(5);
    harry.set_base3int(15);
    harry.show();
    
    return 0;
}