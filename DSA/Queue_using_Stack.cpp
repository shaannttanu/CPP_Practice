#include<iostream>
#include<stack>
using namespace std;

class queue{

    stack<int> s1;
    stack<int> s2;
    
    public:
        void enqueue(int data){
            s1.push(data);
        }
        int dequeue(){
            if(s1.empty() and s2.empty()){
                return -1;
            }
            else if(s1.size()==1){
                int topval=s1.top();
                s1.pop();
                return topval;

            }
            else if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            int topval=s2.top();
            s2.pop();
            return topval;
        }
};

int main()
{
    queue q;
    q.enqueue(10);
    cout<<q.dequeue();
    cout<<q.dequeue();
    return 0;
}