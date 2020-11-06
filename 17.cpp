#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int u=0;u<(n-1);u++)
    {
        int ab=a[u],kk=u;
        for(int i=u;i<=(n-1);i++)
        {
            if(a[i]<ab)
            {
                ab=a[i];
                kk=i;
            }
        }
        swap(&a[u],&a[kk]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
