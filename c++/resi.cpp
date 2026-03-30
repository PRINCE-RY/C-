#include<iostream>
using namespace std;
class eee
{
    int v;
    public:
    eee()
    {
        v=100;
    }
    ~eee()
    {
        
    }
    void resistor(int r1)
    {
        float i;
        i=v/r1;
        v=i*r1;
        cout<<"the voltage in one resistor:"<<v<<endl;
    }
    void resistor(int r1,float r2)
    {
        float j;
        int r=r1+r2;
        j=v/r;
        float v1=j*r1;
        float v2=j*r2;
        cout<<"the voltage in r1:"<<v1<<endl;
        cout<<"the voltage in r2:"<<v2<<endl;
    }
    void resistor(float r1,int r2,int r3)
    {
        float k,v1,v2,v3;
        k=v/(r1+r2+r3);
        v1=k*r1;
        v2=k*r2;
        v3=k*r3;
        cout<<"the voltage across r1:"<<v1<<endl;
        cout<<"the voltage across r2:"<<v2<<endl;
        cout<<"the voltage across r3:"<<v3<<endl;
    }
};
int main()
{
    eee m;
    m.resistor(4);
    m.resistor(12,5.5);
    m.resistor(9.8,5,7);
    return 0;
}
