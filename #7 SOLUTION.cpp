#include<iostream>
using namespace  std;
class Fraction
{
   private:
   long num,deno;
   public:
   Fraction(int long n=0, int long d=0)
   {
    num=n;
    deno=0;
   }
   friend void operator >>(istream &in, Fraction &f)
   {
    cout<<"\n Numerator   : ";
    in>>f.num;
    cout<<" Denominator :  ";
    in>>f.deno;
   }
   friend void operator <<(ostream &ot , Fraction &f)
   {
    ot<<f.num<< "/"<<f.deno;
   }
   Fraction operator ++()
   {
     ++num;
     ++deno;
     return *this;
   }
   Fraction operator ++(int s)
   {
      Fraction temp=*this;
      num++;
      deno++;
      return temp;

   }

};
int main()
{
    Fraction f1,f2;
    cout<<"\n F1   : ";
    cout<<f1;
    cout<<"\n F2   : ";
    cout<<f2;
    cout<< "\n";
    cout<< "\n Enter 1st Fraction  : \n";
    cin>>f1;
    cout<<"\n f1++  : ";
    f1++;
    cout<<f1;
    cout<<"\n ++f1  : ";
    ++f1;
    cout<<f1;
    cout<< "\n";
    cout<< "\n Enter 2nd Fraction  : \n";
    cin>>f2;
    cout<<"\n f2++  : ";
    f2++;
    cout<<f2;
    cout<< "\n ++f2 : ";
    ++f2;
    cout<<f2;
    return 0;


}

