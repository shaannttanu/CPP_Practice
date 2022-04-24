#include<iostream>
using namespace std;

int sum(int a,float b){
    cout<<a+b<<endl;
    return 0;
}
void sum(float a,int b){
    cout<<a+b<<endl;
}
int main()
{
    sum(5,7.77f);
    sum(7.77f,5); 
    return 0;
}