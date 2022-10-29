/*Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).*/
#include<iostream>
#include<conio.h>
using namespace std;
class mystring
{
    char str[100];
public:
    void get_string()
    {
        cout<<"Enter string  : ";
        //cin>>str;
        cin.getline(str,100);
    }
    void display()
    {
        cout<<"String are : "<<str<<endl;
    }
    void operator!()
    {
        cout<<"! operator called \n";
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                str[i]=str[i]+32;
            }
            else
            {
                str[i]=str[i]-32;
            }
        }
    }
};
int main()
{
    mystring s1;
    s1.get_string();
    s1.display();
    !s1;
    s1.display();
    getch();
    return 0;
}
