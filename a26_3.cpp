// Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include<iostream>
using namespace std;
class cube
{
    private:
    int a;
    float vol;
    public:
    cube()
    {
      a=0;
    }
    void setData(int y)
    {
       a=y;
    }
    int getData()
    {
        return a;
    }
    float calculate()
    {
        vol=a*a*a;
        return vol;
    }
};
int main()
{
    cube c;
    c.setData(5);
    c.calculate();
    cout<<"The volume of cube of side "<<c.getData()<<" units is "<<c.calculate() << " cubic units.";
    return 0;
}