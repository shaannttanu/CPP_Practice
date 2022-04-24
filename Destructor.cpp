#include<iostream>
using namespace std;

class abc{
    private:
        int a;
        static int count;
        static void increment(void){
            count++;
        }
        static void decrement(void){
            count--;
        }
    public:
        abc(){                                  //CONSTRUCTOR
            cout<<"CONSTRUCTOR EXECUTED FOR OBJECT "<<count<<endl;
            a=5;
            increment();
        }

        ~abc(){                                 //DESTRUCTOR
            decrement();
            cout<<"DESTRUCTOR EXECUTED FOR OBJECT "<<count<<endl;
            cout<<a<<endl;
        }
};
int abc::count=1;
int main()
{   
    cout<<"Entering Main block ---> "<<endl;
    abc obj1;   //Constructor executed for obj1
    abc obj2;   //Constructor executed for obj2
    {
        cout<<"Now entering block..."<<endl;
        abc obj3; //Constructor executed for obj3
        abc obj4; //Constructor executed for obj4
        cout<<"Exiting block..."<<endl;
    }
    //Destructor executed for obj 3,4 as their scope is inside the block only
    cout<<endl<<endl<<"Out of the block!"<<endl;
    return 0;
}
    //Destructor executed for obj1,obj2 as their scope is inside main function.