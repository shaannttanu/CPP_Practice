#include<iostream>

using namespace std;

int sum_till_num(int num){
    if(num==1){                     //Recursive function to give sum of first n natural numbers 
        return 1;
    }
    return num+sum_till_num(num-1);
}

int main()
{   
    int num;
    cout<<"Enter number of terms : "<<endl;
    cin>>num;
    cout<<sum_till_num(num);
    return 0;
}