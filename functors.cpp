#include<iostream>
#include<functional>
#include<algorithm>

using namespace std; 

int main(){
    int arr[]={1,3,24,4,77,89};
    
    //for ascending order
    //sort(arr,arr+6);//for sort function we has to #include<algorithm>

    //for descending order
    sort(arr,arr+6,greater<int>()); //greater<int>() is a function object

    for (int i = 0; i <6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}