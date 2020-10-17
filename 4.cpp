#include<iostream>
using namespace std;
int main()
{
    long long n=0,a=0,b=0;
    cin>>n;
    if(n%3==0)
    {
        cout<<"TRUE"<<endl;
    }
    else
    {
        for(;;)
        {
            a=n/10;
            b=n-10*a;
            if(b==3)
            {
                cout<<"TRUE"<<endl;
                break;
            }
            if(a==0)
            {
                cout<<"FALSE"<<endl;
                break;
            }
            n=a;
        }
    }
    return 0;
}
