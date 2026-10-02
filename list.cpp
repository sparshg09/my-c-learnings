#include<iostream>
#include<list>
using namespace std; 

void display(list<int> &lst){
    list<int>:: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<< *it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1;//list of 0 length
    list<int> list2(3);//empty list of size 3
    
    list1.push_back(12);
    list1.push_back(21);
    list1.push_back(4);
    list1.push_back(3);
    list1.push_back(3);
    list1.push_back(10);

    // list<int>::iterator iter;//iterator formation
    // iter=list1.begin();//makes iterator to point at first element of list1
    
    // cout<< *iter<<endl;
    // iter++;
    // cout<< *iter<<endl;
    // iter++;
    // cout<< *iter<<endl;
    // iter++;
    // cout<< *iter<<endl;
    // iter++;
    // cout<< *iter<<endl;
    display(list1);

    //**removing data from a list
    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);
    // list1.remove(3);//saare 3 remove kardega list me se
    // display(list1);

    //sorting the list
    //list1.sort();
    //display(list1);

    // reversing the list
    // list1.reverse();
    // display(lis1);


    list<int> :: iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=55;
    iter++;
    *iter=65;
    display(list2);

    list1.merge(list2);
    cout<<"list1 after merging";
    display(list1);

    return 0;
}