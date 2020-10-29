#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int trem;
    trem=*a;
    *a=*b;
    *b=trem;
}
int main()
{
    int m,n,i,vv;
    cin>>m>>n;
    int a[m],b[m];
    for(i=0;i<=(m-1);i++)
    {
        cin>>a[i]>>b[i];
    }
    for(vv=1;vv<=(m-1);vv++)
    {
        int mm;
        mm=0;
        for(i=0;i<(m-1);i++)
        {
            if(b[i]<b[i+1])
            {
                swap(&b[i],&b[i+1]);
                swap(&a[i],&a[i+1]);
                mm=1;
            }
        }
        if(mm==0)
        {
            break;
        }
    }
    for(i=0;i<=(m-1);i++)
    {
        n=n-a[i];
        if(n<0)
        {
            cout<<i<<endl;
            break;
        }
        if(i==(m-1)&&n>=0)
        {
            cout<<m<<endl;
            break;
        }
    }
    return 0;
}
