#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a[5],b[5],c[5];
    int i;
    for(i=0;i<=4;i++)
    {
        cin>>a[i]>>b[i];
        c[i]=a[i]/b[i];
    }
    for(i=0;i<=4;i++)
    {
        cout<<setiosflags(ios::fixed)<<setprecision(i+1)<<c[i]<<endl;
    }
    return 0;
}
