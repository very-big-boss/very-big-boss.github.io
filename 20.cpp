#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    double a1=0,a2=0,a3=0,b1=0,b2=0,b3=0;
    for(i=1;i<=3;i++)
    {
        int m=0,n=0;
        cin>>m>>n;
        char a[n];
        double b[n];
        for(int nn=0;nn<n;nn++)
        {
            cin>>a[nn]>>b[nn];
            if(a[nn]=='A')
            {
                b1+=b[nn];
            }
            if(a[nn]=='B')
            {
                b2+=b[nn];
            }
            if(a[nn]=='C')
            {
                b3+=b[nn];
            }
        }
        double lll=0;
        for(int nn=0;nn<n;nn++)
        {
            lll+=b[nn];
        }
        if(m==1)
        {
            a1=lll;
        }
        if(m==2)
        {
            a2=lll;
        }
        if(m==3)
        {
            a3=lll;
        }
    }
    cout<<1<<' '<<fixed<<setprecision(2)<<a1<<endl;
    cout<<2<<' '<<fixed<<setprecision(2)<<a2<<endl;
    cout<<3<<' '<<fixed<<setprecision(2)<<a3<<endl;
    cout<<'A'<<' '<<fixed<<setprecision(2)<<b1<<endl;
    cout<<'B'<<' '<<fixed<<setprecision(2)<<b2<<endl;
    cout<<'C'<<' '<<fixed<<setprecision(2)<<b3<<endl;
    return 0;
}
