#include <iostream>
using namespace std;

// base class
class employee
{
public:
    int id;
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    employee() {} // derived class jo hai wo base class ke constructor ko call karta hai toh ek default constructor hona chaiye
};

// derived class syntax
/*class derivedclassname : {{visibility-mode}} {{base-class-namespace}}
{
    members/methods etc.
}*/

// creating a derived class programmer class from base class employee
class programmer : employee
{
public:
    int langcode;
    programmer(int inpId)
    {
        id = inpId;
        langcode = 9;
    }
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee sparsh(1), jiya(2);
    cout << sparsh.salary << endl;
    cout << jiya.salary << endl;
    programmer gulu(10);
    cout << gulu.langcode << endl;
    // cout<<gulu.id<<endl;  //this will give error because inherited privately
    gulu.getdata();
    return 0;
}