#include<iostream>
using namespace std; 

int sum(int a, int b){
    int c = a + b;
    return c;
}

//this will not swap a and b;
void swap(int a,int b){ //temp a b
   int temp = a;         // 4  4 5
   a=b ;                 // 4  5 5
   b= temp;              // 4  5 4
                       
}

//***  call by reference using pointers
void swapPointer(int* a,int* b){ //temp a b
    int temp = *a;                // 4  4 5
    *a= *b ;                      // 4  5 5
    *b= temp;                     // 4  5 4
}//adress ki madad se value change kardega



// ***  call by reference using C++ reference variable
void swapReferenceVar(int &a,int &b){ //temp a b
    int temp = a;                      // 4  4 5
    a= b ;                             // 4  5 5
    b= temp;                           // 4  5 4
}

// ***  return by reference
/*int & swapReferenceVar(int &a,int &b){ //temp a b
    int temp = a;                      // 4  4 5
    a= b ;                             // 4  5 5
    b= temp;                           // 4  5 4
    return a;
}*/

int main(){
    int a=4, b=5;
    //cout<<sum(a,b);
    cout<<"the value of a is "<<a<<"and the value of b is"<<b;
    //swap(a, b);//this will not swap value of a and b
    //swapPointer(&a, &b); //this will swap a and b using pointer refernce
    swapReferenceVar(a, b);//this will swap a and b using reference variable
    //swapReferenceVar(a, b) = 766;//return by refernce
    cout<<"\n the value of a is "<<a<<" the value of b is"<<b;
    return 0;
}