/* Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result. */

#include<iostream>
using namespace std;
class StaticCount
{
    private:
    static int a;
    public:
 int static increment()
    {
        a++;
        return a;
    }
};
int StaticCount::a;
int main()
{
    StaticCount c;
    c.increment();
    c.increment();
    cout<<"The value is : "<<c.increment();
   
    return 0;

}