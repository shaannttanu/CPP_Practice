#include<iostream>
#include<fstream>       //containes necessray classes :
                        // 1.fstreambase class
                        // 2.ifstream class
                        // 3.ofstream class
#include<string>
using namespace std;

int main()
{   
    string str="While doing C++ programming, you write information to a file from your program using the stream insertion operator (<<) just as you use that operator to output information to the screen. The only difference is that you use an ofstream or fstream object instead of the cout object.";
    ofstream out;
    out.open("File_Sample.txt",ios::out);  //using open() function to open the file
    
    out<<str;
    cout<<out.tellp()<<endl;  //tellp()returs the current position of file pointer and  seekp() places the file pointer to a desired position inside file
    
    out.close();   //closing the file(a good practice )

    ifstream in("File_Sample.txt",ios::in); //Using constructor method to open file
    string s;
    int words_count=0;
    int character_count=0;
    while(in.eof()==0){
        in>>s;
        if(s=="While"){
            s="@@@@@@@@@@@";  // if any word is 'while' then replace it with @@@@@@@@@@@
        }
        for(int i=0;i<s.size();i++){
            if(s.at(i)=='a'){   //replace all 'a' in file with '^'
                s.at(i)='^';
            }
            character_count++;
        }
        words_count++;
        cout<<s<<endl;
    }
    cout<<"Total words in file : "<<words_count<<endl; 
    cout<<"Total characters in file : "<<character_count<<endl;
    return 0;
}