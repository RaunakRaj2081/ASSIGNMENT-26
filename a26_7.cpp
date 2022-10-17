/* Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box. */

#include<iostream>
using namespace std;
class Box
{
    private:
    int l,b,h,vol;
    public:
    Box()
    {
        cout<<"The length,breadth and height of the box are : "<<endl;
        l=10;
        b=13;
        h=7;
    }
    int volume()
    {
      vol=l*b*h;
      return vol;
    }
    void display()
    {
        cout<<"Length = "<<l<<endl<<"Breadth = "<<b<<endl<<"Height = "<<h<<endl;
    }
};
int main()
{
    Box c;
    c.display();
    c.volume();
    cout<<"The volume of the box is : "<<c.volume();
    return 0;
}