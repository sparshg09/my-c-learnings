#include<iostream>
//#include "sparsh.g" this will produce error if 'sparsh.g' do not exist in current directory
using namespace std;
int main()
{
    int a=5, b=6;
    cout<<"operators in c++"<<endl;// endl is a substitute of \n
    cout<<"\ni am sparsh";
    cout<<"\nthe value of a+b is "<<a+b<<" \n" ;// \n ko hamesha inverted comma ke andar lo chahe end me ya next line ki ekdam starting me
    cout<<"the value of a-b is "<<a-b ; 
    cout<<"\nthe value of a*b is "<<a*b ;
    cout<<"\nthe value of a/b is "<<a/b ;
    cout<<"\nthe value of a%b is "<<a%b ;
    cout<<"\nthe value of a++ is "<<a++ ;
    cout<<"\nthe value of ++a is "<<++a ;
    cout<<"\nthe value of a-- is "<<a-- ;
    cout<<"\nthe value of --a is "<<--a ;

    // comparision operators
    cout<<"\nthe value of a==b is"<<(a==b) ;
    cout<<"\nthe value of a>=b is"<<(a>=b) ;
    cout<<"\nthe value of a<=b is"<<(a<=b) ;
    cout<<"\nthe value of a!=b is"<<(a!=b) ;
    cout<<"\nthe value of a<b is"<<(a<b) ;
    cout<<"\nthe value of a>b is"<<(a>b) ;
    
    //logical operators
    cout<<"\nthe value of logical and operator is"<<((a>b)&&(a==b)) ;
    cout<<"\nthe value of logical or operator is"<<((a>b)||(a==b)) ;
    cout<<"\nthe value of logical not operator is"<<(!(a==b)) ; 

    return 0;
}