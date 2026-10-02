#include<iostream>
using namespace std;
// if else ladder
int main(){
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    if((age<18)&&(age>2)){
        cout<<"you are gay"<<endl;
    }
    else if(age==18){
        cout<<"you are lesbian"<<endl;
    }
    else if(age==100){
        cout<<"you are homophobic";
    }
    else{
        cout<<"you are transgender";
    }
    
  return 0;
}