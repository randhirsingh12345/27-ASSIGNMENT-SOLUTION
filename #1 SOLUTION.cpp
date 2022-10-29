/*Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/
#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"\nreal="<<a << " imag="<<b;
    }
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    Complex operator -(Complex c)
    {
        Complex temp;
        temp.a=a-c.a;
        temp.b=b-c.b;
        return temp;
    }
    Complex operator *(Complex c)
    {
        Complex temp;
        temp.a=a*c.a;
        temp.b=b*c.b;
        return temp;
    }
    int operator==(Complex c)
    {
         cout<< "== operator called "<<endl;
        if(a==c.a && b==c.b)
            return 1;
        else
           return 0;
    }
};
int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    int x,y,a,b;
    cout<< "Enter real or Imag part for first Complex Number  : ";
    cin>>x>>y;
    cout<< "Enter real or Imag part for Second Complex Number : ";
    cin>>a>>b;
    c1.setdata(x,y);
    c2.setdata(a,b);
    c3=c1+c2;
    cout<<"+ operator called ";
    c3.showdata();
    cout<<endl<<endl;
    c4=c1-c2;
    cout<< "- operator called ";
    c4.showdata();
    cout<<endl<<endl;
    c5=c1*c2;
    cout<< "* operator called ";
    c5.showdata();
    cout<<endl<<endl;
    int k;
    k=c1==c2;
    if(k==1)
        cout<< "Both the real part or the Imag part of  Complex Number are same "<<endl;
    else
        cout<<"Complex Number are not same "<<endl;

    return 0;
}

