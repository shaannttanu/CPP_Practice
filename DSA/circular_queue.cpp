#include<iostream>
using namespace std;

#define size 4

class circularQueue{
    public:
        int *arr;
        int front;
        int rear;

        circularQueue(){
            arr=new int[size];
            front=rear=0;
        }
        void enqueue(int);
        void dequeue();
        void display();
};
void circularQueue::enqueue(int data){

    if((rear+1)%size==front){
        cout<<"QUEUE FULL!"<<endl;
        return;
    }
    rear=(rear+1)%size;
    arr[rear]=data;
}

void circularQueue::dequeue(){

    if(rear==front){
        cout<<"QUEUE EMPTY!"<<endl;
        return;
    }
    front=(front+1)%size;
}

void circularQueue::display(){

    if (front <= rear) {
      while (front <= rear){
         cout<<arr[front]<<" ";
         front++;
      }
   } 
   else {
      while (front <= size - 1) {
         cout<<arr[front]<<" ";
         front++;
      }
      front = 0;
      while (front <= rear) {
         cout<<arr[front]<<" ";
         front++;
      }
   }
   cout<<endl;
}

int main()
{
    circularQueue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display();
    q.dequeue();
    q.display();
    q.enqueue(1000);
    q.display();
    return 0;
}