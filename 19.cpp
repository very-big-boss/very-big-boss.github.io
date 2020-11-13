#include<iostream>
using namespace std;
int main()
{
    int m,n,i,u;
    cin>>m>>n;
    int a[m][n],b[n][m];
    for(i=0;i<=(m-1);i++)
    {
        for(u=0;u<=(n-1);u++)
        {
            cin>>a[i][u];
        }
    }
    cout<<endl;
    for(i=0;i<=(m-1);i++)
    {
        for(u=0;u<=(n-1);u++)
        {
            b[u][i]=a[i][u];
        }
    }
    for(i=0;i<=(n-1);i++)
    {
        for(u=0;u<=(m-1);u++)
        {
            cout<<b[i][u];
            if(u!=(m-1))
            {
                cout<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}
