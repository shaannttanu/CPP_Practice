#include<iostream>
using namespace std;

void tower_of_hanoi(int n,char source,char aux,char destination){
    if(n==0){
        return;
    }
    tower_of_hanoi(n-1,source,destination,aux);
    cout<<source<<" to "<<destination<<endl;
    tower_of_hanoi(n-1,aux,source,destination);
}

int main()
{   
    int n;
    n=2;
    tower_of_hanoi(n,'A','B','C');    
    return 0;
}