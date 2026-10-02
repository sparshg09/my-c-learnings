#include<iostream>
#include<fstream>
using namespace std; 

int main(){
    //connecting our file with gu stream
    ofstream gu("samplelect60.txt");

    //creating a name string and filling it with the string entered by user
    cout<<"enteryour name"<<endl;
    string name;
    cin>>name;
    //ye bhi waisa hi hai space ke baad consider nhi karega

    //writing a string to the file
    gu<<"my name is " + name;
    
    gu.close();//to close the stream

    ifstream jiya("samplelect60.txt");
    string content;
    getline(jiya,content);
    cout<<"the content of this file is: "<<content;
    jiya.close();

    return 0;
}