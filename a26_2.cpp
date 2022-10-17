/* Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time) */

#include<iostream>
using namespace std;
class Time
{
  private:
  int h,m,s;
  public:
  void setTime(int a,int b, int c)
  {
    h=a;
    m=b;
    s=c;
  }
  void showTime()
  {
    cout<<h<<" hr "<<m<<" min "<<s<<" sec";
  }
  Time add(Time c)
  {
    Time temp;
    temp.h=h+c.h;
    temp.m=m+c.m;
    temp.s=s+c.s;
    return temp;
  }
};
int main()
{
    Time c1,c2,c3;
    c1.setTime(5,50,28);
    c2.setTime(4,7,25);
    c3=c1.add(c2);
    c3.showTime();
    return 0;
}
