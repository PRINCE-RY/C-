#include<iostream>
#include<string>
using namespace std;
class employee
{
    public:
    string name;
    int empno;
    int sal;
    int dailyallow;
    int netsal;
    employee()
    {
        
    }
    void getdata()
    {
        cout<<"enter name: "<<endl;
        cin>>name;
        cout<<"enter employee number: "<<endl;
        cin>>empno;
        cout<<"enter employee basic salary: "<<endl;
        cin>>sal;
        cout<<"enter dailyallow: "<<endl;
        cin>>dailyallow;
        netsal=sal+dailyallow;
    }
    void display()
    {
        cout<<"employee name: "<<name<<endl;
        cout<<"employee id: "<<empno<<endl;
        cout<<"employee basic salary: "<<sal<<endl;
        cout<<"employee net salary: "<<netsal<<endl;
    }
    void big(employee e[],int size)
    {
        int max=0;
        int id=0;
        for(int i=0;i<size;i++)
        {
            if(e[i].netsal>max)
            {
                max=e[i].netsal;
                id=e[i].empno;
            }
        }
        cout<<"maximum salary: "<<max<<endl;
        cout<<"id of having maximum salary is: "<<id<<endl;
    }
    void small(employee e[],int size)
    {
        int min=e[0].netsal;
        int id=e[0].empno;
        for(int i=0;i<size;i++)
        {
            if(e[i].netsal<min)
            {
                min=e[i].netsal;
                id=e[i].empno;
            }
        }
        cout<<"minimum salary: "<<min<<endl;
        cout<<"id of having minimum salary is: "<<id<<endl;
    }
};
int main()
{
    employee emp[4];
    for(int i=0;i<4;i++)
    {
        emp[i].getdata();
    }
    for(int i=0;i<4;i++)
    {
        emp[i].display();
    }
    emp[0].big(emp,4);
    emp[0].small(emp,4);
    return 0;
}
        
