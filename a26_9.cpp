/* Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit. */

#include<iostream>
using namespace std;
class Bill
{
    private:
    int unit;
    double bill;
    public:
    Bill()
    {
        unit=0;
        bill=0;
    }
    void get()
    {
        cout<<"Enter the unit consumed : ";
        cin>>unit;
    }
    double calculateBill()
    {
        if(unit<=100)
        {
            bill=unit*(1.20);
            return bill;
        }
        else if(unit>100 && unit<=100)
        {
            bill=unit*(2);
            return bill;
        }
        else 
        {
            bill=unit*(3);
            return bill;
        }
    }

};
int main()
{
    Bill c;
    c.get();
    c.calculateBill();
    cout <<"Bill = "<<c.calculateBill();
    return 0;
}
