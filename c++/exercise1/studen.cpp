#include<iostream>
using namespace std;
class stud
{
   private:
      int age;
      float height,weight,percentage;
      string name;
   public:
      stud()
      {
	 name=" ";
	 age=0;
	 height=0;
	 weight=0;
	 percentage=0;
      }

      ~stud()
      {




      }
      void getdata()
      {
	 cout<<"enter the name of the student:"<<endl;
	 cin>>name;
	 cout<<"enter the age:"<<endl;
	 cin>>age;
	 cout<<"enter the height,weight,percentage of marks:"<<endl;
	 cin>>height>>weight>>percentage;
      }
      void printdata()
      {
	 cout<<"name of the student: \n"<<name<<endl;
	 cout<<"Age of the student: \n"<<age<<endl;
	 cout<<"Height of the student: \n"<<height<<endl;
	 cout<<"Weight of the student:\n"<<weight<<endl;
	 cout<<"The percentage of the student: \n"<<percentage<<endl;
      }
};
int main()
{
   stud r1;
   r1.getdata();
   r1.printdata();
   return 0;
}
   
