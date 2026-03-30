#include<iostream>
using namespace std;
class student
{
   int reg,a,b,c,d,e;
   string name;
   public:
   student(string h,int n,int s1,int s2,int s3,int s4,int s5)
   {
      name=h;
      reg=n;
      a=s1;
      b=s2;
      c=s3;
      d=s4;
      e=s5;
   }
   void total()
   {
      int mark;
      mark=a+b+c+d+e;
      cout<<"total marks:"<<mark<<endl;
   }
   
   void display()
   {
      cout<<"name: "<<name<<endl;
      cout<<"register no:"<<reg<<endl;
   }
   student(student &r)
   {
      name=r.name;
      reg=r.reg;
      a=r.a;
      b=r.b;
      c=r.c;
      d=r.d;
      e=r.e;
   }
   ~student()
   {
   }
  };
int main()
{
   string x;
   int y;
   cout<<"enter the name:"<<endl;
   cin>>x;
   cout<<"enter the register no:"<<endl;
   cin>>y;
   student g(x,y,93,78,90,29,59);
   g.display();
   g.total();
   student g1(g);
   g1.display();
   g1.total();
   student g2=g1;
   g2.display();
   g2.total();
   return 0;
}
