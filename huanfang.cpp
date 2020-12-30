#include<iostream>
#include<iomanip>
using namespace std;
int n,a[100][100]={0},i,j,h,t;
int ass(int aq)
{
    if(aq==0)
        aq=n-1;
    else
        aq--;
    return aq;
}
int add(int aq)
{
    if(aq==n-1)
        aq=0;
    else
        aq++;
    return aq;
}
void f(int b)
{
    a[i][j]=b;
    if(b==n*n)
    {
        return;
    }
    h=i;t=j;
    i=ass(i);j=add(j);
    if(a[i][j]!=0)
    {
        i=h+1;
        j=t;
    }
    f(b+1);
}
int main()
{
    cin>>n;
    i=0;j=n/2;
    f(1);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<setw(4)<<left<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
