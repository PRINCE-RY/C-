#include<iostream>
using namespace std;
class conv
{
   int *l;
   int len;
   public:
   conv()
   {
      len=0;
   }
   ~conv()
   {
   }
   conv(int n)
   {
      int len;
      int temp=n;
      while(temp>0)
      {
	 temp=temp/2;
	 len++;
      }
      l=new int[len];
   }
   void convert(int n)
   {
      int i=0;
      while(n>0)
      {
	 l[i]=n%2;
	 n=n/2;
	 i++;
      }
      for(int j=i-1;j>=0;j--)
      {
	 cout<<l[j];
      }
   }
};
int main()
{
   int m;
   cout<<"enter the no:"<<endl;
   cin>>m;
   conv r1(m);
   r1.convert(m);
   return 0;
}
