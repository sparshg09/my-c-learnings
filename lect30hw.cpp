//code to find distance between two points

#include<iostream>
using namespace std; 

class Distance{
    int x1,y1,x2,y2;
    public:
    void setdata(){
        cout<<"enter x1 cordinate"<<endl;
        cin>>x1;
        cout<<"enter y1 cordinate"<<endl;
        cin>>y1;
        cout<<"enter x2 cordinate"<<endl;
        cin>>x2;
        cout<<"enter y2 cordinate"<<endl;
        cin>>y2;
    }
    void answer(){
        int c;
        c=(pow((x1-x2),2))+(pow((y1-y2),2));

        //c=x*x+y*y;
        float s=sqrt(c);
        cout<<s;
    }

};



int main(){
    Distance p;
    p.setdata();
    p.answer();
    
    return 0;
}