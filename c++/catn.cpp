#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a[10];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(int i=10;i>0;i--)
    {
        cout<<a[i];
    }
    

    return 0;
}

