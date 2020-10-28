#include<iostream>
using namespace std;
int main()
{
    int a[2]={4,0},b[2]={0,0},c[2]={0,0},d=0;
    for(a[1]=1;a[1]<=2;a[1]++)
    for(b[0]=1;b[0]<=4;b[0]++)
    for(b[1]=1;b[1]<=4;b[1]++)
    for(c[0]=1;c[0]<=4;c[0]++)
    for(c[1]=1;c[1]<=4;c[1]++)
    for(d=1;d<=3;d++)
    {
        if(b[0]==b[1]||c[0]==c[1])
        {
            continue;
        }
        if(b[0]==2||b[1]==2)
        {
            continue;
        }
        if(b[0]==3&&b[1]==4)
        {
            continue;
        }
        if(b[0]==4&&b[1]==3)
        {
            continue;
        }
        if(c[0]==3&&c[1]==4)
        {
            continue;
        }
        if(c[0]==4&&c[1]==3)
        {
            continue;
        }
        if(a[0]==c[0]||a[0]==c[1]||a[1]==c[0]||a[1]==c[1]||c[0]==d||c[1]==d)
        {
            continue;
        }
        if(b[0]!=c[0]&&b[0]!=c[1]&&b[1]!=c[0]&&b[1]!=c[1])
        {
            continue;
        }
        if(d==a[1])
        {
            if(b[0]==a[1]||b[1]==a[1])
            {
                cout<<a[1]<<" "<<a[0]<<endl;
                cout<<b[0]<<" "<<b[1]<<endl;
                cout<<c[0]<<" "<<c[1]<<endl;
                cout<<d<<endl;
                goto stop;
            }
        }
    }
    stop:
    return 0;
}
