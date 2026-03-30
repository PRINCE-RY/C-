#include<iostream>
#include<cmath>
using namespace std;
class number
{
   int a;
   int b;
   public:
   number()
   {
   }
   number(int x,int y)
   {
      a=x;
      b=y;
   }
   void print()
   {
      cout<<a<<"+j"<<b;
   }
   number operator-(number n)
   {
      number temp;
      temp.a=a-n.a;
      temp.b=b-n.a;
      return temp;
   }
   number operator*(number n)
   {
      float m,m1,m2,t,t1,t2;
      m1=sqrt(a*a+b*b);
      t1=atan2(b,a);
      m2=sqrt(n.a*n.a+n.b*n.b);
      t2=atan2(n.b,n.a);
      m=m1*m2;
      t=t1+t2;
      number temp;
      temp.a=m*cos(t);
      temp.b=m*sin(t);
      return temp;
   }
};
int main()
{
   number n1(5,6);
   number n2(2,3);
   number n3=n1-n2;
   cout<<"subtract of two complex number is:";n3.print();
   number n4=n1*n2;
   cout<<"\nmultiplication of two complex number is:";n4.print();
   return 0;
}
