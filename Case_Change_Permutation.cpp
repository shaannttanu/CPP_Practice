#include<iostream>
using namespace std;

void solve(string input,string output){

    if(input.size()==0){
        cout<<output<<endl;
        return;
    }

    string out1=output;
    string out2=output;

    out1.push_back(input[0]);
    out2.push_back((char)input[0]-32);
    input.erase(input.begin()+0);

    solve(input,out1);
    solve(input,out2);

}

int main()
{
    string str="ab";
    solve(str," ");
    return 0;
}