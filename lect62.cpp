#include<iostream>
#include<fstream>
using namespace std; 

int main(){

    ofstream out;
    out.open("samplelect60.txt");
    out<<"this is me\n";
    out<<"this is me here\n";
    out<<"this me here";
    out.close();

    ifstream in;
    string st,st2;
    in.open("samplelect60.txt");
    //in>>st>>st2;
    //cout<<st<<st2;//te tareeka se ek ek karke word lega
    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();

    return 0;
}