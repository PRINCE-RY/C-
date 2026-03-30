#include<iostream>
using namespace std;
class item
{
   private:
      int price,code,a,b,c,quant;
      string name;
   public:
      item()
      {
	 price=0;
	 code=0;
	 name=" ";
      }
      ~item()
      {

      }
      void getdata()
      {
	 cout<<"enter the name of the item:"<<endl;
	 cin>>name;
	 cout<<"enter the code.no:"<<endl;
	 cin>>code;
      }
      int getpri()
      {
	 cout<<"enter the price:"<<endl;
	 cin>>price;
	 return price;
      }
      int getquant()
      {
	 cout<<"enter the quantity:"<<endl;
	 cin>>quant;
	 return quant;
     }
      
};
int main()
{
   item i1,i2;
   int a,b,c,d,total;
   i1.getdata();
   c=i1.getquant();
   a= i1.getpri();
   i2.getdata();
   d=i2.getquant();
   b= i2.getpri();
   total=(a*c)+(b*d);
   cout<<"the total is: "<<total<<endl;
   return 0;
}



