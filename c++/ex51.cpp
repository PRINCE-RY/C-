#include<iostream>
using namespace std;
class product
{
   int i,p;
   public:
   product(int r=0)

   {
      i=r;

   }

   void display()
   {
      cout<<"\n"<<i;
      //cout<<p;

   }
   friend  product operator * (int b, product c);
   friend product operator * (product c,int b);

 };
product operator * (int b, product c)
{
   product d;
   d.i = b * c.i;
   return d;
}
product operator * (product c,int b)
{
   product d;
   d.i =c.i * b;
   return d;
}


int main()
{
   product t(5);

   product q(15);

   product m;
   product n;
  product o;
   m = 2 * t;
  n = q * 2;

   m.display();
   n.display();

   return 0;
}
