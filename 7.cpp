#include<iostream>
using namespace std;
int main()
{
    long long n=0,m=0;
    cin>>n;
    for(;;)
    {
        if(n%2==1)
        {
            m=3*n+1;
        }
        else
        {
            m=n/2;
        }
        cout<<m<<endl;
        n=m;
        if(n==1)
        {
            break;
        }
    }
    return 0;
}
