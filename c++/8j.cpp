#include <iostream>
using namespace std;
class A
{
    public:
    int a;
    virtual void input()
    {
        cout<<"Enter the value of a:";
        cin>>a;
    }
    virtual void show()
    {
        cout<<"a value is:"<<a<<endl;
    }
};
class B:public A
{
    public:
    int b;
    void input()
    {
        cout<<"Enter the value of b:";
        cin>>b;
    }
    void show()
    {
        cout<<"b value is:"<<b<<endl;
    }
};
class C:public B
{
    public:
    int c;
    void input()
    {
        cout<<"Enter the value of c:";
        cin>>c;
    }
    void show()
    {
        cout<<"c value is:"<<c<<endl;
    }
};
class D:public C
{
    public:
    int d;
    void input()
    {
        cout<<"Enter the value of d:";
        cin>>d;
    }
    void show()
    {
        cout<<"d value is:"<<d<<endl;
    }
};
class E:public D
{
    public:
    int e;
    void input()
    {
        cout<<"Enter the value of e:";
        cin>>e;
    }
    void show()
    {
        cout<<"e value is:"<<e<<endl;
    }
};
int main()
{
    A* aa;
    A f;
    aa = &f;
    aa->input();
    aa->show();
    B g;
    aa = &g;
    aa->input();
    aa->show();
    C h;
    aa = &h;
    aa->input();
    aa->show();
    D i;
    aa = &i;
    aa->input();
    aa->show();
    E j;
    aa = &j;
    aa->input();
    aa->show();
    return 0;
}

