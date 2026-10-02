#include <iostream>
using namespace std;

// forwrd declaration
class Complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealComplex(Complex, Complex);
    int sumcompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // indivisually declaring functions as freind
    /* friend int calculator:: sumrealComplex(Complex ,Complex);
     friend int calculator:: sumcompComplex(Complex ,Complex);*/

    // aliter:declaring entire calculator class freind
    friend class calculator; // puri class ko freind bana diya ab us class ke har function ko ek ek karke freind nhi banana padega
public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "your number is" << a << " + " << b << "i" << endl;
    }
};

int calculator::sumrealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumcompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);
    calculator calc;
    int res = calc.sumrealComplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is" << res << endl;
    int resc = calc.sumcompComplex(o1, o2);
    cout << "the sum of complex part of o1 and o2 is" << resc << endl;
    return 0;
}