#include<iostream>
#include<cstring>
using namespace std;
class String
{
   char *p,*q;
   int l;
   public:
   String()
   {
      l=0;
   }
   ~String()
   {
   }
   String(const char *temp)
   {
      l=strlen(temp);
      p=new char[l];
      strcpy(p,temp);
      cout<<p;
   }
   String(const char *m,const char *n)
   {
      l=strlen(m)+strlen(n);
      q=new char[l];
      strcpy(q,m);
      strcat(q,n);
      cout<<q;
   }
};
int main()
{
   String s1("computer");
   cout<<"\n";
   String s2("computer","programming");
   return 0;
}
