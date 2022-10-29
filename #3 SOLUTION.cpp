/*Write a C++ program to add two complex numbers using operator overloaded by a
friend function*/
#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    friend Complex operator+(Complex,Complex);//declaration of +operator as a friend.
        void setdata(int x, int y)
        {
            a=x;
            b=y;
        }
        void showdata()
        {
            cout<< "Real ="<< a<< " Imag ="<<b;
        }
};
Complex operator+(Complex r , Complex s)//define of +operator by friend function
{
    Complex temp;
    temp.a=r.a+s.a;
    temp.b=r.b+s.b;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.setdata(10,15);
    c2.setdata(10,15);
    c3=c1+c2;//+operator call hua or c1 and c2 as an argument pass hus or +operator ne jo return kiya c3 me assign hua.
    c3.showdata();
    return 0;
}
