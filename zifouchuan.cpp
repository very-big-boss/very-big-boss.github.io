#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string ass(string a,string b)
{
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int m,i;
    if(a.size()>=b.size())
    {
        m=a.size()+1;
    }
    else
    {
        m=b.size()+1;
    }
    a.resize(m,'0');
    b.resize(m,'0');
    int at[m],bt[m];
    for(i=0;i<m;i++)
    {
        at[i]=a[i]-48;
        bt[i]=b[i]-48;
    }
    int ct[m];
    for(i=0;i<=(m-1);i++)
    {
        ct[i]=0;
    }
    for(i=0;i<m;i++)
    {
        ct[i]=ct[i]+at[i]+bt[i];
        if(ct[i]==2)
        {
            ct[i+1]+=1;
            ct[i]=0;
        }
        else if(ct[i]==3)
        {
            ct[i+1]+=1;
            ct[i]=1;
        }
    }
    char kkk[m+1];
    if(ct[m-1]==0)
    {
        for(i=0;i<=(m-2);i++)
        {
            kkk[i]=ct[m-2-i]+48;
        }
        kkk[m-1]='\0';
    }
    else if(ct[m-1]!=0)
    {
        for(i=0;i<=(m-1);i++)
        {
            kkk[i]=ct[m-1-i]+48;
        }
        kkk[m]='\0';
    }
    return kkk;
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
        cout<<ass(a[i],b[i])<<endl;
    }
    return 0;
}
