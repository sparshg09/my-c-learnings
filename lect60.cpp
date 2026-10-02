#include<iostream>
#include<fstream>
using namespace std; 

int main(){
    string st="sparsh sexy";
    //opening files using constructor and writing it
    ofstream out("samplelect60.txt");//write operation
    out<<st;
    
    //opening files using constructor and reading it
    ifstream in("samplelect60b.txt");//write operation
    string st2;
    //in>>st2;//ye khaali ek word lega 
    getline(in,st2);//ye puri line lega
    cout<<st2;

    //out,in object ke naam hai wo hum kuch bhi rakh sakte hai apni marji se
    return 0;
}