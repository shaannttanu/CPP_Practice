#include<iostream>
using namespace std;

#define size 50

class queue{
    public:
        int *arr;
        int front;
        int rear;

        queue(){
            arr=new int[size];
            front=-1;
            rear=-1;
        }
        void enqueue(int data){
            if(rear==size-1){
                cout<<"QUEUE FULL!"<<endl;
                return;
            }
            rear++;
            arr[rear]=data;
        }
        void dequeue(){
            if(front==rear){
                cout<<"QUEUE EMPTY!"<<endl;
                return;
            }
            front++;
        }
        void display(){
            for(int i=front+1;i<=rear;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        int peek(int pos){
            if(pos<=rear && pos>front){
                return arr[pos];
            }
            return -1111;
        }
};

int main()
{
    queue *q=new queue;
    q->enqueue(10);
    q->enqueue(20);
    q->enqueue(40);
    q->enqueue(30);
    q->dequeue();
    q->display();
    cout<<q->peek(6);
    return 0;
}