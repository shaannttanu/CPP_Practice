#include<iostream>
using namespace std;

int main()
{
    int a[5];
    int *ptr=a;
    for(int i=0;i<5;i++){
        cout<<"Enter value of "<<i+1<<" element : " <<endl;
        cin>>a[i];
    }
    for(int j=0;j<5;j++){
        cout<<*(ptr+j)<<"-----ADDRESS-----"<<ptr+j<<endl;
    }
    return 0;
}