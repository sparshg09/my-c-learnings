#include<iostream>
using namespace std;
int main(){
   // for (int i = 0; i <= 40; i++)
   // {
   //     cout<<i<<endl;//this is loop body
   //     
   // }
    
//example of infinite for loop
//for (int i = 0; 34 <40; i++) isme  always true condition hai
//{
//    cout<<i<<endl
//}


//*************while loop
// int i=1;
// while(i<=40){
//    cout<<i<<endl;
//    i++;
   
// }

//example of infinite while loop
//int i=1;
//while(true){
//    cout<<i<<endl;
//    i++;
//}

//do while loop
int i=1;
do{
    cout<<i<<endl;
    i++;
}while(i<=40);

/*ye do while loop ki condition false hai fir bhi ek baar chal jayega and one de dega but aisa while loop me nhi hota*/
// int i=1;    
// do
// {
//     cout<<i<<endl;
//     i++;
// } while (false);



return 0;
}