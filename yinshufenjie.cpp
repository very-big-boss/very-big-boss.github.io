#include<iostream>
#include<cmath>
using namespace std;
int x(int b)
{
    int i=2;bool w=0;
    for(i=2;i<=sqrt(b);i++)
    {
        if(b%i==0)
        {
            w=1;
            break;
        }
    }
    if(w==1)
        return i;
    else if(w==0)
        return 0;
}
void f(int a)
{
    if(x(a)==0)
    {
        cout<<a;
        return;
    }
    f(x(a));
    cout<<'*';
    f(a/x(a));
}
int main()
{
    int n;
    cin>>n;
    cout<<n<<'=';
    f(n);
    return 0;
}
