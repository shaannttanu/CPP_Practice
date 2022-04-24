#include<iostream>
#include<string>
using namespace std;

class stack
{
    int *arr;
    int size;
    int top;
    public:
        stack(int size)
        {
            this->size=size;
            arr=new int[size];
            top=-1;
        }
        void push(int val);
        int pop();
        bool isEmpty();
        bool isFull();
        void display(void)
        {
            for(int i=0;i<size;i++)
            {
                cout<<arr[i]<<" ";

            }
            cout<<endl;
        }
};

bool stack::isEmpty()
{
    if(top==-1)
    {
        return true;
    }
    return false;
}
bool stack::isFull()
{
    if(top==size-1)
    {
        return true;
    }
    return false;
}
void stack::push(int val)
{
    if(!isFull())
    {
        top++;
        arr[top]=val;
    }
    else{
        cout<<"Stack is already Full!"<<endl;
    }
}
int stack::pop()
{   
    int val;
    if(!isEmpty())
    {
        val=arr[top];
        top--;
        size--;
        return val;
    }
    else{
        return -1;
    }
}
int main()
{
    stack obj=stack(5);
    obj.push(10);
    obj.push(20);
    obj.push(40);
    obj.push(50);
    obj.push(90);
    obj.display();
    int val1=obj.pop();
    int val2=obj.pop();
    obj.display();
    return 0;
}