/*Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.*/
#include<iostream>
#include<string.h>
using namespace std;
class CString
{
private:
    char str[20];
public:
    void setdata(char s1[])
    {
        strcpy(str,s1);
    }
    //void check()
    void showdata()
    {
        cout<<str<<endl;
    }
    CString operator+(CString s)
    {
       strcat(str,s.str);
       puts(str);

    }
    int operator==(CString &s)
    {

        if(strcmp(str,s.str))
            return 1;
        else
            return 0;
    }

};
int main()
{
    CString os1,os2;
    char s1[20],s2[20];
    cout<<"Enter first string :";
    cin>>s1;
    cout<<"Enter second string :";
    cin>>s2;
    os1.setdata(s1);
    os2.setdata(s2);
    cout<<"First string are : ";
    os1.showdata();
    cout<<"Second string are :";
    os2.showdata();
    if(os1==os2)
         cout<< "The two string are not identical\n";
    else
        cout<< "The two string are identical\n";
    cout<<"After concatenate two strings are : ";
    os1.operator+(os2);

}

