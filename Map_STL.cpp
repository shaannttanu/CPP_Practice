#include<iostream>
#include<map>
#include<string>
using namespace std;

int32_t main()
{   
    map<string,int> m1{{"A",22},{"B",31}};
    map<string,int> m2{{"C",45},{"D",97}};
    map<string,int> u;

    map<string,int> :: iterator iter;
    for(iter=m1.begin();iter!=m1.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<endl<<"**************************"<<endl;
    map<string,int> :: iterator iter1=m1.begin();
    advance(iter1,1);
    m1.insert(iter1,{"QW",129});
    // m1.erase("A");
    for(iter=m1.begin();iter!=m1.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    return 0;
}