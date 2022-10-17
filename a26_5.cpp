/* Define a class Date and write a program to Display Dateand initialise date object
using Constructors. */

#include<iostream>
using namespace std;
class Date
{
    private:
    int dd,mm,yy;
    public:
    Date()
    {
        dd=15;
        mm=10;
        yy=2022;
        cout<<"The entered date is : ";
    }
    void display()
    {
        cout<<dd<<"/"<<mm<<"/"<<yy;
    }
};
int main()
{
    Date c1;
    c1.display();
    return 0;
}
