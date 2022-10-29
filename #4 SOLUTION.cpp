/*4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.*/
#include<iostream>
using namespace std;
class Time
{
private:
    int H,M,S;
public:
    friend istream & operator >>(istream &input , Time &T)
    {
        cout<<"Enter Hours    : ";
        input>>T.H;
        cout<<"Enter Minute   : ";
        input>>T.M;
        cout<<"Enter  Second  : ";
        input>>T.S;
        return input;
    }
    friend ostream & operator <<(ostream &output , Time &T)
    {
        cout<<"Hours   : ";
        cout<<T.H;
        cout<<endl;
        cout<<"Minutes : ";
        cout<<T.M;
        cout<<endl;
        cout<<"Second  : ";
        cout<<T.S;
        cout<<endl;
        return output;
    }
    int operator==(Time t)
    {
        if(H==t.H&&M==t.M&&S==t.S)
            return 1;
        else
            return 0;
    }
};
int main()
{
    Time t1,t2;
    cout<< "\n Enter First Time : "<<endl;
    cout<< "-----------------------"<<endl;
    cin>>t1;
    cout<< "\n First Time \n";
    cout<<t1;
    cout<< "\n Enter Second Time : "<<endl;
    cout<< "-----------------------"<<endl;
    cin>>t2;
    cout<< "\n Second Time \n";
    cout<<t2;
    if(t1==t2)
        cout<<"\nTimes are same \n\n";
    else
        cout<< "\nTimes are not same \n\n";
    return 0;
}
