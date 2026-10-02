#include<iostream>
using namespace std; 

class bankdeposit{
    int principal;
    int years;
    float intrest;
    float returnval;
    
    public:
   
    bankdeposit(){}//this blank contructor is important because if we want our syntax like this which we used in main
    
   //intrest can be in percent or in fraction
    bankdeposit(int p,int y,float r);//for r to be in fraction
    bankdeposit(int p,int y,int r);//for r to be in percent
    void show(){
        cout<<endl<<"principal amount was"<<principal<<"return value after"<<years<<"years is"<<returnval<<endl;
    }

};

bankdeposit:: bankdeposit(int p,int y,float r){
    principal=p;
    years=y;
    intrest=r;
    returnval=principal;
    for (int i = 0; i < y; i++)
    {
        returnval=returnval*(1+intrest);
    }
}
bankdeposit:: bankdeposit(int p,int y,int r){
    principal=p;
    years=y;
    intrest=float(r)/100;
    returnval=principal;
    for (int i = 0; i < y; i++)
    {
        returnval=returnval*(1+intrest);
    }
}

int main(){
    bankdeposit bd1,bd2,bd3;//this line require blank constructor because when compiler reads this line it tries to create three bankdeposit object and because we did not given any argument the comiler looks for constructor that takes zero argument
    int p,y;
    float r;
    int R;
    
    cout<<"enter value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1= bankdeposit(p,y,r);
    bd1.show();
    //if we dont want to write that blank constructor syntax must be (wo upar wali line nhi likhi bd1 bd2 wali)
    /*cout<<"enter value of p y and r"<<endl;
    cin>>p>>y>>r;
    bankdeposit bd1= bankdeposit(p,y,r);//change in this line
    bd1.show();*/
    
    cout<<"enter value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2= bankdeposit(p,y,R);
    bd2.show();
    
    bd3.show();//garbage value dega
    return 0;
}