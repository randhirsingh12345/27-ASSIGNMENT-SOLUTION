/*Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object*/
#include<iostream>
using namespace std;
class matrix
{
private:
    int r,c;
    int mat[3][3];
public:
    matrix()
    {
        r=c=0;
    }
    matrix(int rows ,int cols)
    {
        r=rows;
        c=cols;
    }
    void getdata()
    {
        cout<<"Enter the element(3 x 3) ";
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
            cin>>mat[i][j];
    }
    void showdata()
    {
        int i,j;
        for(i=0;i<r;i++)
        {
           cout<<"\n";
            for(j=0;j<c;j++)
                cout<<"  " <<mat[i][j];
        }
    }
    matrix operator-()
    {
        matrix temp(r,c);
        int i,j;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                temp.mat[i][j]=-mat[i][j];
        }
        return temp;
    }
};
int main()
{
    matrix m1(3,3),m2;
    m1.getdata();
    cout<< "Matrix is : "<<endl;
    m1.showdata();
    m2=-m1;
    cout<<"\nMatrix is : "<<endl;
    m2.showdata();
    cout<< "\n";
    return 0;
}
