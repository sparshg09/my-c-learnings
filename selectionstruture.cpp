#include<iostream>
using namespace std;
// switch case statement
int main(){
    int age;
    cout<<"tell me your age";
    cin>>age;
    switch (age)
    {
    case 18: 
        
        cout<<"you are mine"<<endl;
       
        break;
    case 17:
        
        cout<<"bache teri maa ki ----"<<endl;
        
        break;
    case 19:
        
        cout<<"you are trash"<<endl;
        

        break;
        // agar ye break nhi likhenge toh sare cases ke result print ho jaate

    
    default:
    cout<<"jaa jaake chat se kudja";
    
        break;
    }

    cout<<"\nitna hi tha switch case";
 
    return 0;
}