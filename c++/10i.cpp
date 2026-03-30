#include<iostream>
using namespace std;
class exp
{
   int i,j,k;
   public:
   exp(int x,int y)
   {
      i=x;
      j=y;
   }
   void div()
   {
      try{
         if(j==0)
            throw 0;
         float k=i/j;
         cout<<"the value is:"<<k<<endl;
      }
      catch(int x)
      { cout<<"cannot divide by:"<<x<<endl;}
   }
   void nega()
   {
      try{
         if(i<0 || j<0)
            throw 0;
         float k=i/j;
         cout<<"the value is:"<<k<<endl;
      }
      catch (int m)
      { cout<<"cannot divide negative numbers."<<endl;
      }
   }
   void kent()
   {
      try{
         if(i==j)
            throw 1;
      }
      catch(...)
      { cout<<"default execution"<<endl;
      }
   }
   void ice()
   {
      try
      {
         try
         {
            throw 0;
         }
         catch(int )
         {
            throw;
         }
      }
      catch(int g)
      {
         cout<<"rethrow execution"<<endl;
      }
   }
};
int main()
{
   exp e(6,0);
   e.div();
   exp e1(8,-4);
   e1.nega();
   exp e2(16,8);
   e2.kent();
   e2.ice();
   return 0;
}

