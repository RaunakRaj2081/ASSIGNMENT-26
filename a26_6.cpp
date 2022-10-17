/* Define a class student and write a program to enter student details using constructor
and define member function to display all the details. */

#include<iostream>
#include<string.h>
using namespace std;
class student 
{
    private:
    char name[20];
    int Class , roll;
    public:
    student()
    {
        cout<<"The details of student are : "<<endl;
        strcpy(name,"Rohan Raj");
        Class=10;
        roll=25;
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"class : "<<Class<<"th"<<endl;
        cout<<"Roll no. : "<<roll;
    }
};
int main()
{
    student c1;
    c1.display();
    return 0;
}
