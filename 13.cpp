#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int ass(string a,int n)
{
    reverse(a.begin(),a.end());
    int m=a.size(),i,ll=1,kk=0;
    for(i=0;i<m;i++)
    {
        int nn=a[i]-'0';
        if(nn>=n)
        {
            ll=0;
            break;
        }
    }
    for(i=0;i<m;i++)
    {
        char m=a[i];
        int g=m-'0';
        kk+=g*pow(n,i);
    }
    if(ll!=0)
    {
        return kk;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int n,i;
    cin>>n;
    string a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    for(i=0;i<n;i++)
    {
        int h;
        for(h=2;h<=16;h++)
        {
            if(ass(a[i],h)==-1||ass(b[i],h)==-1||ass(c[i],h)==-1)
            {
                continue;
            }
            if(ass(a[i],h)*ass(b[i],h)==ass(c[i],h))
            {
                cout<<h<<endl;
                break;
            }
            if(h==16)
            {
                cout<<0<<endl;
                break;
            }
        }
    }
    return 0;
}
