#include<iostream>
using namespace std;

union money{
    int rice;
    char crypto;
    int cash;
};
int main()
{
    union money curr;
    curr.rice=12;
    curr.crypto='a';
    // cout<<curr.rice;
    cout<<curr.crypto;
    return 0;
}