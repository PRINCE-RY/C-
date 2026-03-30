#include<iostream>
#include<cmath>
using namespace std;
class average
{
public:
int a,b;
float c;
average()
{
cout<<"enter the value of a:"<<endl;
cin>>a;
cout<<"enter the value of b:"<<endl;
cin>>b;
}
void calc()
{
c=a/b;
}
};
int main()
{
average a1;
a1.calc();
try
{
if(a1.c>0)
{
cout<<a1.c<<"= answer"<<endl;
}
else
{
throw(a1.c);
}
}
catch(float c)
{
cout<<"answer is negative "<<c;
} 
average a2;
try
{
if(a2.b==0)
{
throw 0;
}
else
{
a2.calc();
cout<<a2.c<<endl;
}
}
catch(int x)
{
cout<<"error: cannot exception"<<endl;
}
try
{
throw 0;
}
catch(int d)
{
cout<<"rethrow handling"<<endl;
}

try
{
throw 0;
}
catch(...)
{
cout<<"default exception"<<endl;
}
return 0;
}
