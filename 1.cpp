#include<iostream>
using namespace std;
long long a=0,b=1,c=0,n=0,i=1,s=1;
int main()
{
    cout<<"请输入一个正整数：";
    cin>>n;
    cout<<"斐波纳切数列前"<<n<<"项为："<<endl;
    cout<<b<<endl;
    c=n%2;
    if(c==1)
    {
        for(a=0,b=1,i=1,s=1;i<=(n-1)/2;i++)
        {
            a=a+b;
            cout<<a<<endl;
            s=s+a;
            b=a+b;
            cout<<b<<endl;
            s=s+b;
        }
    }
    else
    {
        for(a=0,b=1,i=1,s=1;i<n/2;i++)
        {
            a=a+b;
            cout<<a<<endl;
            s=s+a;
            b=a+b;
            cout<<b<<endl;
            s=s+b;
        }
        a=a+b;
        cout<<a<<endl;
        s=s+a;
    }
    cout<<"斐波纳切数列前"<<n<<"项和为："<<s<<endl;
    return 0;
}
