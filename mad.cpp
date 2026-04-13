#include<iostream>
#include<string>
using namespace std;
int main()
{
   char *string1="programming";
   int count=strlen(string1);
   for(int i=0;i<count;i++)
   {
      write.count(i,string1);
      cout<<"\n";
   }
   for(int i=count;i<0;i--)
   {
      write.count(i,string1);
      cout<<"\n";
   }
   return 0;
}
