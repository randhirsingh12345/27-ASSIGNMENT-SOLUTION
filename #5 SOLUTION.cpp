/*Consider following class Numbers
class Numbers
{
int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers.*/
#include<iostream>
using namespace std;
class Numbers
{
private:
    int x,y,z;
public:
    void setdata(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    Numbers operator-()
    {
        Numbers temp;
        temp.x=-x;
        temp.y=-y;
        temp.z=-z;
        return temp;
    }
    void showdata()
    {
        cout<<"x= "<<x<< "\ny= "<<y<< "\nz= "<<z;

    }
};
int main()
{
    Numbers n1,n2;
    n1.setdata(10,20,15);
    cout<<"Numbers are :\n";
    n1.showdata();
    n2=-n1;
    cout<< "\nNumbers are after apply unary minus(-) operator \n";
    n2.showdata();

    return 0;
}
