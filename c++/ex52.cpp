#include<iostream>
using namespace std;
class two;
class one
{
   int x;
   friend class two;
   public:
   one (int i)
   {
      x=i;
   }
};
class two
{
   int y;
   public:
   two(int j)
   {
      y=j;
   }
   int add()
   {
      one o(10);
      cout<<"\n"<<"addition of o.x and y:"<< o.x + y;
   }
   int product()
   {
      one o(10);
      cout<<"\n"<<"product of o.x and y:"<< o.x * y;
   }
};
int main()
{

   two s(15);
   s.add();
   s.product();
   return 0;
}
