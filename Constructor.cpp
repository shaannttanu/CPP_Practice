#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x,y;
    public:
        Point(int a,int b){             //CONSTRUCTOR - function having same name as class 
            x=a;        
            y=b;
        }
        void display(void);
        // friend void distance(Point , Point);
        void distance(Point p1,Point p2){
            int x_dist=p1.x-p2.x;
            int y_dist=p1.y-p2.y;
            cout<<"Distance : "<<sqrt((x_dist*x_dist)+(y_dist*y_dist))<<endl;
        }
};

void Point :: display(void){
    cout<<"("<<x<<","<<y<<")"<<endl;
}

// void distance(Point p1,Point p2){
//     int x_dist=p1.x-p2.x;
//     int y_dist=p1.y-p2.y;
//     cout<<"Distance : "<<sqrt((x_dist*x_dist)+(y_dist*y_dist))<<endl;
// }  

int main()
{   
    int x1,x2,y1,y2;
    cout<<"Enter (x1,y1) coordinates of point 1 : "<<endl;
    cin>>x1>>y1;  
    cout<<"Enter (x2,y2) coordinates of point 2 : "<<endl;
    cin>>x2>>y2;  
    Point p1(x1,y1),p2(x2,y2);
    p1.display();
    p2.display();

    p1.distance(p1,p2);
    return 0;
}