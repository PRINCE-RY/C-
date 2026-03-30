#include<iostream>
using namespace std;
class stack
{
   int a[10],n;
   int count,r;
   public:
   stack()
   {
      count=-1;
      r=0;
   }
   void getdata()
   {
      cout<<"Enter the no.of elements in stack:"<<endl;
      cin>>n;
      cout<<"Enter the elements one by one:"<<endl;
      for(int i=0;i<n;i++)
      {
         cin>>a[i];
         count=i;
      }
      r=1;
   }
   void push(int x)
   {
      try
      {
         if(count<4)
         {
            a[count+1]=x;
            count+=1;
            r=1;
         }
         else
         {
            throw x;
         }
      }
      catch(int y)
      {
         cout<<"Exception : STACK OVERFLOW."<<endl;

      }

   }
   void pop()
   {
      try
      {
         if (count>=0)
         {
            cout<<"Popped element:"<<a[count]<<endl;
            a[count]='\0';
            count-=1;
         }
         else
         {
            throw count;
         }
      }
         catch (int y)
         {
            if(y<0 && r==1)
            {
               cout<<"Exception : STACK UNDERFLOW"<<endl;

            }
            if(y<0 && r==0)
            {
               cout<<"Exception : Stack empty."<<endl;
               throw;
            }
         }

   }

};
int main()
{
   stack s1,s2;
   try
   {
    s1.getdata();
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.push(9);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s2.pop();
   }
   catch(...)
   {
      cout<<"DEFAULT EXCEPTION"<<endl;
   }
    return 0;
}
