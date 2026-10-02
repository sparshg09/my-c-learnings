#include<iostream>
#include<map>
#include<string>
using namespace std; 

int main(){
    map<string,int> marksmap;
    marksmap["sparsh"]=100;
    marksmap["jiya"]=90;
    marksmap["ragavi"]=70;

    marksmap.insert({{"gulu",69},{"mummy",0}});

    map<string,int> ::iterator itr;
    for(itr= marksmap.begin();itr!=marksmap.end();itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<endl; 
    }

    cout<<"the size is: "<<marksmap.size()<<endl;
    cout<<"the max size is: "<<marksmap.max_size()<<endl;
    cout<<"the empty's return value is: "<<marksmap.empty()<<endl;//return 0 because nahi ye empty nhi hai
    return 0;
}