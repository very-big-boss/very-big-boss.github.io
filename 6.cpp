#include<iostream>
using namespace std;
int main()
{
    long long n=0,i=0,m=0,e=0;
    cin>>n;
    long long a[n],b[n];
    for(i=0;i<=(n-1);i++)
    {
        cin>>a[i];
    }
    cin>>m;
    e=m%n;
    for(i=0;i<=(e-1);i++)
    {
        b[i]=a[n-(e-i)];
    }
    for(i=1;i<=(n-e);i++)
    {
        b[e-1+i]=a[i-1];
    }
    for(i=0;i<(n-1);i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<b[n-1];
    return 0;
}
