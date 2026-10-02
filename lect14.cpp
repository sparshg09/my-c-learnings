#include<iostream>
using namespace std; 
typedef struct employee //typedef is not compulsary usse hum kuch or use kar sakte h fir hume poora struct employee nhi likhna padega khaali kuch or bhi likh sakte h
    {
        /* data */
        int eId;
        char favchar; 
        float salary;
    }ep; // ye ep is that kuch or of typedef agar typedef nhi use kara toh yahan kuch nhi likhna or jaroori nhi hum ep likhe kuch bhi likh sakte h
int main(){
    struct employee sparsh;
    sparsh.eId = 1;
    sparsh.favchar= 'c';
    sparsh.salary =10100100100;
    cout<<"the details of employee sparsh is:"<<endl;
    cout<<sparsh.salary<<endl;
    cout<<sparsh.favchar<<endl;
    cout<<sparsh.eId<<endl;
    
    ep jiya;//struct employee ki jagah humne ep use kara
    jiya.eId = 5;
    jiya.favchar= 'a';
    cout<<"the details of employee jiya is:"<<endl;
    jiya.salary =101;
    cout<<jiya.salary<<endl;
    cout<<jiya.favchar<<endl;
    cout<<jiya.eId<<endl;
    //aise hum multiple ka bana sakte

    union money //agar hum koi ek type of data use karenge ek baar me from all given data then we use union to arrange data to jo hum use karenge specifically khali uski memory ghiregi bakiyo ki nhi jo normal case me hota h ki bakiyo ki memory bhi ghirti h
    {
        int rice;
        char car;
        float pounds;
    };// ye jo union ka pura taam jhaam h isko jaroori nhi h int main wale bracket me rakhna
    
    union money sx;
    sx.rice=34;
   // sx.rice='f';    agar hum ye bhi likhte toh hume ab correct value nhi milegi because union use karne ka matlab hi yhi hota h ki hum koi ek type of data hi use karenge from all the given data
    cout<<sx.rice<<endl;


    enum meal{breakfast,lunch,dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
   //we can also now use breakfast lunch dinner as data type to store value
   meal s =lunch;
   cout<<s;//s gives us the value of lunch

    return 0;
}