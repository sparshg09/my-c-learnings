#include<iostream>
using namespace std; 

int main(){
    //********new operator

    int *p=new int(40);//dynamic initialisation
    cout<<"the value at adress p is"<<*(p)<<endl;

    //array if we want to alloacate block of memory
    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    //arr[2]=30;//can also be written as below
    *(arr+2)=30;
    
    cout<<"the value of arr[0] is"<<arr[0]<<endl;
    cout<<"the value of arr[1] is"<<arr[1]<<endl;
    cout<<"the value of arr[2] is"<<arr[2]<<endl;

    //********delete operator
    delete p;
    delete[] arr;//free up block of allocated memory
    //ab ye garbage value dega
    cout<<"the value of arr[0] is"<<arr[0]<<endl;
    cout<<"the value of arr[1] is"<<arr[1]<<endl;
    cout<<"the value of arr[2] is"<<arr[2]<<endl;

    return 0;
}