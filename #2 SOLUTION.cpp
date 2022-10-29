//Write a C++ program to overload unary operators that is increment and decrement.
#include<iostream>
using namespace std;
class Unary
{
private:
    int a;
public:
    void setdata(int x)
    {
        a=x;
    }
    friend Unary operator++(Unary );
    friend Unary operator--(Unary);
    void showdata()
    {
        cout<<a;
    }
};
Unary operator++(Unary obj1)
{
     Unary temp;
     temp.a=obj1.a+1;
     return temp;
}
Unary operator--(Unary obj2)
{
    Unary temp;
    temp.a=obj2.a-1;
    return temp;
}
int main()
{
    Unary obj1,obj2,obj3,obj4;
    obj1.setdata(4);
    obj2.setdata(5);
    obj3=++(obj1);
    obj4=--(obj2);
    cout<<"increment number= ";
    obj3.showdata();

    cout<<"\ndecrement number= ";
    obj4.showdata();
    return 0;
}
