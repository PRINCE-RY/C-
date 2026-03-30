#include<iostream>
#include<string>

using namespace std;
template <class  T>
class matrix
{
   public:
  T a[3][3],b[3][3],c[3][3];
  void get()
   {
      cout<<"enter elements:";
      for(int i=0;i<3;i++)
      {
         for(int j=0;j<3;j++)
         {
            cin>>a[i][j];
         }
      }
     }
      void get1()
      {
      cout<<"second";
      for(int i=0;i<3;i++)
      {
         for(int j=0;j<3;j++)
         {
            cin>>b[i][j];
         }
      }

   }
   void get2()
   {
      cout<<"result";
      for(int i=0;i<3;i++)
               {
      for(int j=0;j<3;j++)
     {
       cout<<c[i][j]<<"\t";
     }
               }
   }
   void  multiply()
   {
      for(int i=0;i<3;i++)
      {
         for(int j=0;j<3;j++)
         {  c[i][j]=0;
            for(int k=0;k<3;k++)
            {
              c[i][j]=(c[i][j]+(a[i][k]*b[k][j]));
            }
         }
      }

   }
   void add()
  {
       for(int i=0;i<3;i++)
      {
       for(int j=0;j<3;j++)
       {
       c[i][j]=(a[i][j]+b[i][j]);
        
       }
    }

 }
};
int main()
  {

   matrix <int> d;
   d.get();
   d.get1();
   d.multiply();
   d.get2();
   matrix <int> d1;
   d1.get();
   d1.get1(); 
   d1.add();
   d1.get2();
   return 0;
} 
