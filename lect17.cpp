#include<iostream>
using namespace std; 

inline int product(int a,int b){
    return a*b;
}

//**************** static variable
/*int product(int a,int b){
    static int c=0;//this executes only once first time
    c=c+1;//next time this function is run,the value of c will be retained 
    return a*b+c;
}*/


float moneyrecieved(int currentmoney, float factor=1.04){ // here factor is a default argument
    return currentmoney*factor;
}

int main(){
    int a, b;
    cout<<"enter value of a and b\n";
    cin>>a>>b;
    cout<<"product of a and b is"<<product(a,b)<<endl;
    /*cout<<"product of a and b is"<<product(a,b)<<endl;
    cout<<"product of a and b is"<<product(a,b)<<endl;
    cout<<"product of a and b is"<<product(a,b)<<endl;
    cout<<"product of a and b is"<<product(a,b)<<endl;
    cout<<"product of a and b is"<<product(a,b)<<endl;
    cout<<"product of a and b is"<<product(a,b)<<endl;*/
    
    
    int money =100000;
    cout<<"if you have"<<money<<"rs in your bank you will recieve"<<moneyrecieved(money)<<"rs after 1 year"<<endl;
    cout<<"for VIP: if you have"<<money<<"rs in your bank you will recieve"<<moneyrecieved(money,1.1)<<"rs after 1 year";
    
    
    
    return 0;
}