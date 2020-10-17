#include<iostream>
using namespace std;
int main()
{
    long long n=0,i=2,s=1;
    cin>>n;
    long long f[n+1];
    f[0]=0;
    f[1]=1;
    for(i=2;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
        s+=f[i];
    }
    cout<<s<<endl;
    return 0;
}
