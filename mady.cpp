#include<iostream>
#include<string>
using namespace std;
int main()
{
   int i,j,k;
   cout<<"enter the no:"<<endl;
   cin>>k;
   for(i=k;i>0;i++)
   {
      for(j=i;j<k;j++)
      {
	 cout<<"@";
      }

      cout<<"\n";
   }
   return 0;
}
