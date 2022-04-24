#include<iostream>
#include<unistd.h>
using namespace std;

int main(){
    int marks;
    cout<<"enter marks(out of 100) : "<<endl;
    cin>>marks;
    if(marks>=81 && marks<=100){
        cout<<"Evaluating grade..."<<endl;
        sleep(2);
        cout<<"A";
    }
    else if(marks>=61 && marks<81){
        cout<<"Evaluating grade..."<<endl;
        sleep(2);
        cout<<"B";
    }
    else if(marks>=41 && marks<61){
        cout<<"Evaluating grade..."<<endl;
        sleep(2);
        cout<<"C";
    }
    else if(marks>=30 && marks<41){
        cout<<"Evaluating grade..."<<endl;
        sleep(2);
        cout<<"D";
    }
    else{
        cout<<"FAIL!, You need to reapper in the exam next year!";
    }
    return 0;
}