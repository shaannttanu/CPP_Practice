#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int num=5,i=1;
    do
    {
        cout<<setw(2)<<num*i<<endl;
        i++;
    } while (i<=10);
    
    return 0;
}
