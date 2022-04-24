#include<iostream>
using namespace std;

int getBit(int num,int pos){    //get the bit at a desired position  e.g--> 5 : 0 1 0 1
                                                                       // pos:  3 2 1 0
    return (num & (1<<pos))!=0;
}

int setBit(int num,int pos){    //Set the Bit to 1 at a desired position
    return (num|(1<<pos));
}

int clearBit(int num,int pos){    //Set the Bit to 0 at a desired position
    int mask= ~(1<<pos);
    return (num & mask);
}

int updateBit(int num,int pos,int value){         //clear then set the given value
    int mask= ~(1<<pos);
    num=(num & mask);
    return (num | (value<<pos));
}
int main()
{
    cout<<updateBit(5,1,1);
    return 0;
}