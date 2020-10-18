#include<iostream>
using namespace std;
int main()
{
    long long n=0,i=0,p=0,q=0,t=0,y=0;
    cin>>n;
    long long a[n];
    for(i=0;i<=(n-1);i++)
    {
        cin>>a[i];
    }
    p=q=a[0];
    for(i=0;i<=(n-1);i++)
    {
        if(a[i]>p)
        {
            p=a[i];
            t=i;
        }
        if(a[i]<q)
        {
            q=a[i];
            y=i;
        }
    }
    cout<<t+1<<" "<<y+1<<endl;
    return 0;
}
