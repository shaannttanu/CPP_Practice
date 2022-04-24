#include<iostream>
using namespace std;

template<class t1,class t2,class t=float>
t show(t1 data1,t2 data2){
    t avg=(data1+data2)/2;
    return avg;
}

int main()
{
    printf("%.8f",show(12,12.234f));
    return 0;
}