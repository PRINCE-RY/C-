#include<iostream>
using namespace std;
class conv
{
   int l;
   int *len;
   public:
   conv()
   {
      len=0;
      l=new int[len];
   }
   ~conv()
   {

   }
   conv(int n)
   {
      *len=sizeof(int);
      l=new int[len+1];
      int i=0;
      while(n>0)
      {
	 *len[i]=n%2;
	 cout<<i;
	 n=n/2;
	 i++;
      }
      for(int j=i-1;j>=0;j--)
      {
	 cout<<len[j];
      }
   }
};
int main()
{
   conv k1(20);
   return 0;
}

