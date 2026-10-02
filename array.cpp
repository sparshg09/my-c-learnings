#include<iostream>
using namespace std; 

int main(){
    int marks[4]={23,42,86,92};//yahan jaroori nhi h hum 4 likhe c++ hushyaar hai wo khud samajhjayega
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // *****2nd way to form array
    int mathmarks[4];
    mathmarks[0]=222;
    mathmarks[1]=333;
    mathmarks[2]=444;
    mathmarks[3]=555;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    //value of an array can be changed
    mathmarks[3]=111;//humne dobaara mention kari usse value change ho gayi
    cout<<mathmarks[3]<<endl;
    

    // you can also use loop instead of typing each
    // for(int i=0; i<4; i++){
    //     cout<<"the value of marks"<<i<<"is"<<marks[i]<<endl;
    // }
    
   // cout<<sizeof(marks)/sizeof(marks[0]);  //to find no. of elements in an array
    
    
    //pointers and array
    int* p = marks;
    cout<<"the value of marks[0] is "<<*(p)<<endl;
    cout<<"the value of marks[1] is "<<*(p+1)<<endl;
    cout<<"the value of marks[2] is "<<*(p+2)<<endl;
    cout<<"the value of marks[3] is "<<*(p+3)<<endl;
    
    cout<<*(p++)<<endl;
    cout<<*(p)<<endl;
    cout<<p<<endl;
    cout<<++p<<endl;
    cout<<++p;
    
    
    
    return 0;
}