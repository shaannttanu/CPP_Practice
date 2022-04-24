#include<iostream>
using namespace std;

int sum(int num,int sum=0){
    for(int i=0;i<=num;i++){
        sum+=i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter number of terms : "<<endl;
    cin>>n;
    cout<<"Sum of first "<<n<<" natural numbers = "<<sum(n);
    return 0;
}