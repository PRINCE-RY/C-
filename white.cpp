#include<iostream>
using namespace std;
int reverse(int n)
{
    int k=0,m=n;
    while(n!=0)
    {
        m=n%10;
        k=k*10+m;
        n=n/10;
    }
    cout<<k;
    return 0;
}
int main()
{
    int r;
    cin>>r;
    reverse(r);
    return 0;
}
