#include<iostream>
using namespace std;
class stack
{
   public:
      int top;
      int d,max;
      int *a;
      stack()
      { 
	 top=-1;
      }
      stack(int n)
      {
	 max=n;
	 a=new int[max];
      }
      void push(int d)
      {
         if(top>=(max-1))
	 {
	    throw(top);
	 }
	 else
	 {
	    a[top+1]=d;
	    cout<<d<<" pushed into stack"<<endl;
	 }
      }
      void pop()
      {
	 if(top<0)
	 {
	    cout<<"stack underflow"<<endl;
	 }
	 else
	 {
	    int d=a[top--];
	    cout<<d<<endl;
	 }
      }
};
int main()
{
   stack s;
   try
   {
      s.pop();
      throw 0;
   }
   catch(int x)
   {
      cout<<"stack is empty"<<endl;
   }
   stack s1(3);
   try
   {
      s1.push(1);
      s1.push(2);
      s1.push(3);
      s1.push(4);
   }
   catch(int )
   {
      cout<<"stack overflow exception"<<s1.top<<endl;
   }
   try
   {
      throw 0;
   }
   catch(float )
   {
      cout<<"rethrow handling"<<endl;
   }
   return 0;
}

