#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        Student(){
            roll_number=12;
            cout<<"CONSTRUCTOR 1ST CLASS"<<endl;
        }
        Student(int roll){
            roll_number=roll;
        }
        int show_roll(void);
};
int Student :: show_roll(){
    return roll_number;
}

class Marks : public Student{
    protected:
        float maths,physics,chemistry;
    public:
        void setdata(float,float,float);
        void show_marks(void);
        Marks(){
            cout<<"CONSTRUCTOR 2nd CLASS!"<<endl;
        }
};

void Marks :: setdata(float m,float p,float c){
    maths=m;
    physics=p;
    chemistry=c;
}
void Marks:: show_marks(){
    cout<<"Physics : "<<physics<<endl;
    cout<<"Chemistry : "<<chemistry<<endl;
    cout<<"Maths : "<<maths<<endl;
}

class Result : public Marks{
    public:
        void show_percentage(){
            cout<<"Roll Number : "<<show_roll()<<endl;
            cout<<"Percentage : "<<float(maths+physics+chemistry)/3<<endl;
        }
        Result(){
            cout<<"CONSTRUCTOR 3rd Class!"<<endl;
        }
        Result(int roll)
        {
            roll_number=roll;
        }
};
int main()
{
    Result r(30);
    r.setdata(95,95,95);
    // r.show_roll();
    r.show_percentage();
    return 0;
}