#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x,y;
    public :
        Point(){}
        Point(int a,int b);
        void show(void){
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
        friend void distance(Point,Point);
};

Point::Point(int a ,int b){
    x=a;
    y=b;
}

void distance(Point obj1,Point obj2){
    int dist_x;
    int dist_y;
    dist_x=obj1.x-obj2.x;
    dist_y=obj1.y-obj2.y;
    cout<<"Distance : "<<sqrt((dist_x*dist_x)+(dist_y*dist_y));
}

int main()
{   
    int a,b;
    Point obj[2];
    for(int i=0;i<2;i++){
        cout<<"Enter (x"<<i+1<<" , y"<<i+1<<")"<<endl;
        cin>>a>>b;
        obj[i]=Point(a,b);
        obj[i].show();
    }
    distance(obj[0],obj[1]);
    return 0;
}