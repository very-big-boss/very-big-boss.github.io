#include<iostream>
using namespace std;
char a[20][20]={'\0'};int n;bool v=0,c[100]={0};
void f(int h,int g)
{
    if(a[h][g]=='e')
    {
        v=1;
        return;
    }
    if(a[h][g]=='#'||a[h][g]=='s'||a[h][g]=='\0')
        return;
    if(a[h][g]=='.')
    {
        a[h][g]='s';
        if(h>=0&&g>=0&&h<n-1&&g<n)
            f(h+1,g);
        if(h>0&&g>=0&&h<n&&g<n)
            f(h-1,g);
        if(h>=0&&g>=0&&h<n&&g<n-1)
            f(h,g+1);
        if(h>=0&&g>0&&h<n&&g<n)
            f(h,g-1);
        a[h][g]='.';
    }
}
int main()
{
    int m;cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>n;v=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        a[0][0]='.';
        f(0,0);
        c[i]=v;
    }
    for(int i=0;i<m;i++)
    {
        if(c[i]==0)
            cout<<"NO"<<endl;
        else if(c[i]==1)
            cout<<"YES"<<endl;
    }
    return 0;
}
