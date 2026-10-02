#include<iostream>
using namespace std;

class employee{
    int id;
    //int count;//static variable class se bahar likhte hai kyonki iski memory har object ke saath nhi ayegi wo is class ke sath ayegi
    static int count;//static variable ko 0 se initialise karne ki jarurat nhi h wo by default hota h
    //count is static data member of class employee
    public:
    void setdata(void){
        cout<<"enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"the id of employee is"<<id<<"and this is employee no."<<count<<endl;
    }

    //static function
    static void getcount(void){
       // cout<<id;//this will give error because id is not static
        cout<<"the value of count is"<<count<<endl;
    }

};

int employee :: count;//ye static variable har object same share karta h
//int employee :: count=1000;//agar static variable initialise karna h toh idhar karenge upar wali line aise likhenge
                      
int main(){
    employee sparsh,jiya,gulu;
    /*sparsh.id=1;
    sparsh.count=1;*/ //can not do this as id and count are private
    sparsh.setdata();
    sparsh.getdata();
    employee::getcount();
    
    jiya.setdata();
    jiya.getdata();
    employee::getcount();
    
    gulu.setdata();
    gulu.getdata();
    employee::getcount();
    
    return 0;
}