#include<iostream>
using namespace std;
int main()
{
    long long n=0,k=0,a=0;
    cin>>n>>k;
    if(n<=k)
    {
        cout<<2<<endl;
    }
    else
    {
        if((2*n)%k==0)
        {
            a=(2*n)/k;
            cout<<a<<endl;
        }
        else
        {
            a=(2*n)/k;
            a+=1;
            cout<<a<<endl;
        }
    }
    return 0;
}
