#include<iostream>
#include<queue>
using namespace std;

class stack{
    int size;
    queue<int> q1;
    queue<int> q2;

    public:
    stack(){
        size=0;
    }

    void push(int data){
        q2.push(data);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q2.swap(q1);
        size++;
    }
    int  pop(){
        int popval=q1.front();
        q1.pop();
        return popval;
    }
    int getSize(){
        return size;
    }
};

int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.pop();
    return 0;
}