/* Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor. */

#include<iostream>
using namespace std;
class Bank
{
    private:
    int p,r,y;
    double si;
    public:
    Bank()
    {
        cout<<"The Bank loan details of a costumer are : "<<endl;
        p=333540;
        r=4;
        y=4;
    }
    double calculate()
    {
        si=(p*r*y)/100;
        return si;
    }
    void display()
    {
        cout<<"Principal amount = RS_"<<p<<endl<<"Rate of interest = "<<r<<" % per year"<<endl<<"Year = "<<y<<endl;
    }
};
int main()
{
    Bank c;
    c.display();
    c.calculate();
    cout<< "SI = Rs_"<<c.calculate();
    return 0;
}
