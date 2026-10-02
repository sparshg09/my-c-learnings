#include<iostream>
using namespace std; 

int main(){
    for (int i = 0; i < 40; i++)
    {
        /* code */
        cout<<i<<endl;//agar ye ham break ke baad likhte **kahanpe toh 2 print nhi hota
        if (i==2){
            break;
        }
        //**yahanpe
    }
    
    return 0;
}