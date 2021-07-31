#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,i;
    cin>>n>>x;
    int a[n];
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int f=0;
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        int m=(s+e)/2;
        if (a[m]==x)
        {
            cout<<"found"<<endl;
            f=1;
            break;
        }
        else if (a[m]>x)
        {
            e=m-1;
        }
        else if (a[m]<x)
        {
            s=m+1;
        }
    }
    if (f==0)
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}
