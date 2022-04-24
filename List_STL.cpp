#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator i;
    for(i=lst.begin();i!=lst.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl<<"*******************"<<endl;
}

int main()
{
    list<int> l1{28,31,11,5,17,38,12};
    list<int> l2{10,20,30};
    cout<<"Size of list : "<<l1.size()<<endl;
    list<int>::iterator iter=l1.begin();
    // list<int>::iterator iter2=l1.end();
    // list<int>::iterator iter3=l2.begin();

    // advance(iter,2);
    // advance(iter2,4);
    // display(l1);
    // l1.erase(iter,iter2);
    // l1.insert(iter,3000);
    // advance(iter,3);
    // display(l1);
    // l1.erase(iter);

    // l1.sort();
    // l1.reverse();
    // l1.merge(l2);
    // l1.splice(iter,l2);
    
    l1.insert(iter,1000);
    display(l1);
    cout<<"NEW Size of list : "<<l1.size()<<endl;
    return 0;
}