#include<iostream>
#include<iomanip>

using namespace std;

int main(){
int a= 34;
cout<<"the value of a is "<<a;
 a=54;
cout<<"\n the value of a is"<<a;

//constants in c++
const int s=5;
cout<<"the value of s is "<<s;
/*s=45;
cout<<"the value of s is"<<s;*/  // ab ye line error h because hum pehle hi constant declare kar chuke s ki value


int m=5,t=4,k=3444;

cout<<"\n the value of m is"<<m;
cout<<"\n the value of t is"<<t;
cout<<"\n the value of k is"<<k;

cout<<"\n the value of m is"<<setw(4)<<m;
cout<<"\n the value of t is"<<setw(5)<<t;
cout<<"\n the value of k is"<<setw(6)<<k<<endl;

// operator precedence
int i=3, b=4;
//int c=i*b+6;
int c=((((i*5)+b)-47)+85);
// humara bracket lagana jaroori nhi h ye toh bas dikhaane ke lie h kis order me operation horhe h

cout<<c;

return 0;
}