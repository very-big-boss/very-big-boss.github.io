#include<iostream>
using namespace std;
int main()
{
    long long n=0,i=0,p=0,s=0,w=0,v=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<=(n-1);i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=(n-1);i++)
    {
        cin>>b[i];
    }
    for(i=0;i<=(n-1);i++)
    {
        if(a[i]==b[i])
        {
            continue;
        }
        else
        {
            for(p=i;p<=(n-1);p++)
            {
                if(a[i]==b[p])
                {
                    s+=(p-i);
                    v=b[i];
                    b[i]=b[p];
                    b[p]=v;
                    break;
                }
                if(p==(n-1)&&a[i]!=b[p])
                {
                    w=-1;
                    break;
                }
            }
            if(w==-1)
            {
                cout<<w<<endl;
                break;
            }
        }
    }
    if(w==0)
    {
        cout<<s<<endl;
    }
    return 0;
}
