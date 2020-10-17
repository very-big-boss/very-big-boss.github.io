#include<iostream>
#include<cmath>
using namespace std;
int add(int k,int l)
{
    int c=log(l)/log(k);
    return c;
}
int main()
{
    long long n=0,i=0;
    cin>>n;
    long long a[n],b[n];
    for(i=0;i<=(n-1);i++)
    {
        cin>>a[i];
        cin>>b[i];
        cout<<endl;
    }
    for(i=0;i<=(n-1);i++)
    {
        cout<<add(a[i],b[i])<<endl;
    }
    return 0;
}
