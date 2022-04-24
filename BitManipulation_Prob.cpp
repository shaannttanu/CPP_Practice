#include<iostream>
using namespace std;

int countNumberofOnes(int num)
{   
    int count=0;
    while(num!=0)
    {
        num=num&num-1;
        count++;
    }
    return count;
}

int main()
{
    cout<<countNumberofOnes(5);
    return 0;
}