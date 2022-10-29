/*10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).*/
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
    matrix(int rows, int cols)
    {
        r=rows;
        c=cols;
    }
    void getdata()
    {
        cout<<"Enter matrix Element (3x3) : ";
        int i,j;
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
            cin>>mat[i][j];
    }
    void showdata()
    {
        int i,j;
        for(i=0;i<r;i++)
        {
            cout<<" \n";
            for(j=0;j<c;j++)
                cout<<"  "<<mat[i][j];
        }
    }
   matrix operator+(matrix M)
   {
       matrix temp(r,c);
        int i,j;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                temp.mat[i][j]=mat[i][j]+M.mat[i][j];
        }
        return temp;

   }
};
int main()
{
    matrix m1(3,3),m2(3,3),m3;
    m1.getdata();
    m2.getdata();
    cout<<"\nFirst Matrix : ";
    m1.showdata();
    cout<<"\nSecond Matrix : ";
    m2.showdata();
    m3=m1+m2;
    cout<<"\nAddition of matrix : "<<endl;
    m3.showdata();
    return 0;
}
