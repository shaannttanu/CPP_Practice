#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
   unordered_set<int> s;

   s.insert(5);
   s.insert(23);
   s.insert(34);
   s.insert(45);

   // int key=23;
   // if(s.find(key)==s.end()){     //--> find() returns an iterator 
   //    cout<<"not found";
   // }
   // else{
   //    cout<<"found";
   // }

   if(s.count(233)){     //-->count(){substitute for find} returns 1 if element present else returns 0;
      cout<<"found"<<endl;

   }
   else{
      cout<<"Not found"<<endl;
   }
   return 0;
}