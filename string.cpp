#include<iostream>
using namespace std; 

int main(){
   /* char arr[]={'a','p','p','l','e'};
    cout<<arr;

    //method2 to print
    for(int i=0;i<=5;i++){
    cout<<arr[i];
    }*/

    char arr[10];
    cin>>arr;
    arr[2]='\0';//ye likhne se 3rd place par null character aa gya toh ab khaali shuru ke 2 word print honge
    cout<<arr;

    /*string s;
    cin>>s;
    cout<<s;*/

   /* string s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<s.size();*/

    string s1="rohit", s2="mohit";
    //s1.push_back('p');
    s1=s1+"pa"; 
    s2.pop_back('t');
    //string s3=s1+s2;
    string s3=s1.append(s2);
    cout<<s3;


    string s= "rohit is a \"good\" boy";
    cout<<s;


    return 0;
}