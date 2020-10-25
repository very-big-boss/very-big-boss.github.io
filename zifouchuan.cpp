#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
string ads(string a,string b)
{
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int m=0;
    if(a.size()>=b.size())
    {
        m=a.size();
        b.resize(m,'0');
    }
    else
    {
        m=b.size();
        a.resize(m,'0');
    }
    int at[m],bt[m],ct[m+1],i,q;
    stringstream w;
    for(i=0;i<=(m-1);i++)
    {
        w<<a[i];
        w>>at[i];
        w.clear();
        w<<b[i];
        w>>bt[i];
        w.clear();
    }
    ct[m]=0;
    for(i=0;i<=(m-1);i++)
    {
        ct[i]=at[i]+bt[i];
    }
    for(q=1;q<=10;q++)
    {
        for(i=(m-1);i>=0;i--)
        {
            if(ct[i]==2)
            {
                ct[i+1]+=1;
                ct[i]=0;
            }
        }
    }
    stringstream lk;
    if(ct[m]==0)
    {
        char r[m];
        for(i=0;i<=(m-1);i++)
        {
            lk<<ct[m-1-i];
            lk>>r[i];
            lk.clear();
        }
        return r;
    }
    else
    {
        char r[m+1];
        for(i=0;i<=m;i++)
        {
            lk<<ct[m-i];
            lk>>r[i];
            lk.clear();
        }
        return r;
    }
}
int main()
{
    int n,i;
    cin>>n;
    string a[n],b[n];
    for(i=0;i<=(n-1);i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<=(n-1);i++)
    {
        cout<<ads(a[i],b[i])<<endl;
    }
    return 0;
}
