#include<iostream>
#include<cmath>
using namespace std;
long long sss(long long a,long long b)
{
    long long i=0,p=0,q=0,m=0,n=0,m1=0,n1=0,mn=0,aq=0,bq=0;
    int as[150],bs[150];
    for(i=0;;i++)
    {
        p=a/10;
        q=a-10*p;
        as[i]=q;
        a=p;
        if(p==0)
        {
            m1=i;
            break;
        }
    }
    for(i=0;i<=m1;i++)
    {
        m+=as[i]*pow(2,i);
    }
    for(i=0;;i++)
    {
        p=b/10;
        q=b-10*p;
        bs[i]=q;
        b=p;
        if(p==0)
        {
            n1=i;
            break;
        }
    }
    for(i=0;i<=n1;i++)
    {
        n+=bs[i]*pow(2,i);
    }
    mn=m+n;
    int cs[150];
    for(i=0;;i++)
    {
        p=mn%2;
        cs[i]=p;
        mn=mn/2;
        if(mn==0)
        {
            aq=i;
            break;
        }
    }
    for(i=aq;i>=0;i--)
    {
        bq+=cs[i]*pow(10,i);
    }
    return bq;
}
int main()
{
    long long n=0,i=0;
    cin>>n;
    long long a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<sss(a[i],b[i])<<endl;
    }
    return 0;
}
