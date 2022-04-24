#include<iostream>
using namespace std;

class Student{
    private:
        int marks[5];
        float percentage();
        char grade();
        int counter;

    public:
        void getdata(void);
        void putdata(void);
        void count(void){
            counter=0;
        }
        void increment_count(void);
};

void Student :: getdata(){
    int local_count=1;
    cout<<"Enter Marks of subject "<<counter+1<<" of student "<<local_count<<" : "<<endl;
    cin>>marks[counter];
    local_count++;
    increment_count();
}

void Student :: increment_count(){
    counter ++;
}

float Student :: percentage(){
    int sum=0;
    for(int i=0;i<counter;i++){
        sum+=marks[i];
    }
    return (float)sum/5;
}

char Student :: grade(){
    if(percentage()>=90.0){
        return 'A';
    }
    else if(percentage()>=75 && percentage()<90){
        return 'B';
    }
    else if(percentage()>=65 && percentage()<74){
        return 'C';
    }
    else if(percentage()>=64 && percentage()<73){
        return 'D';
    }
    else{
        return 'E';
    }
}

void Student :: putdata(){
    int local_count=0;
    for(int i=0;i<counter;i++){
        cout<<"Marks : "<<local_count+1<<" "<<marks[i]<<endl;
        local_count++;
    }
    cout<<"Percentage : "<<percentage()<<endl;
    cout<<"Grade : "<<grade()<<endl;

}

int main()
{
    Student s[2];
    for(int i=0;i<2;i++){
        s[i].count();
        for(int j=0;j<5;j++){
            s[i].getdata();
        }
    s[i].putdata();
    }
    return 0;
}