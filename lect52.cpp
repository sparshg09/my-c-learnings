#include<iostream>
using namespace std; 

class shop{
    int id;
    float price;
    public:
    void setdata(int a,int b){
        id=a;
        price=b;
    }
    void getdata(){
        cout<<"code of this item is"<<id<<" price of this item is"<<price<<endl;
    }
};

int main(){
    int size=3;
    //genral store item
    //veggy store item
    //hardware store item
    shop *ptr=new shop[size];
    shop *ptrtemp=ptr;//this we have to do for second loop because in first loop we use ptr++ wo jab last baar run hoga toh ptr ko kahin or hi point karadega but we want a pointer jo starting se point karke aage badhe
    int p;
    float q;

    for(int i=0;i<size;i++){
        cout<<"enter id and price of item"<<i+1<<endl;
        cin>>p;
        cin>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"item num :"<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    
    
    return 0;
}