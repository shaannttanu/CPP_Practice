// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     vector<int> v1(4,5); //creates a vector of 4 integers and all are = 5
//     // for(int i=0;i<v1.size();i++){
//     //     cout<<v1.at(i)<<endl;
//     // }
//     v1.push_back(20); //FUNCTION TO APPEND AN ELEMENT IN VECTOR
//     v1.push_back(30);
//     vector<int>::iterator iter1=v1.begin(); //WAY TO CREATE ITERATOR
//     vector<int>::iterator iter2=v1.begin()+2;
//     // v1.erase(iter1,iter2);
//     cout<<endl;
//     for(int i=0;i<v1.size();i++){
//         cout<<v1.at(i)<<endl;
//     }
//     sort(v1.begin(),v1.end(),greater<int>());  //From <algorithm>
//     cout<<endl;
//     for(int i=0;i<v1.size();i++){
//         cout<<v1.at(i)<<endl;  //v1.at(i) is same as v1[i]
//     }
//     return 0;
//     exit(0);
// }


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v1(10,2);
    int ele;
    cout<<v1.size();
    cout<<endl;
    cout<<"enter element : "<<endl;
    for(int i=0;i<5;i++){
        cin>>ele;
        v1.push_back(ele);
    }
    cout<<v1.size()<<endl;
    vector<int>::iterator iter=v1.begin();

    // v1.clear();  //makes the vector empty
    // cout<<v1.empty()<<endl; //returns : 0-> non-empty | 1-> empty
    v1.erase(iter,iter+5); //erases the data from (begin to begin+5)
    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;
    cout<<"***********************"<<endl;
    return 0;
}