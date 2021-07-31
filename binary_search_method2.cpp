#include <bits/stdc++.h>
using namespace std;
#define r(i,a,b) for(int i=a;i<b;i++) 

int main()
{
    int f=0;
    int k=0;
    int n,x,i;
    cin>>n>>x;
    int a[n];
    r(i,0,n)
    {
        cin>>a[i];
    }
    for (int b = n/2; b >=1 ; b/=2)
    {
        while (k+b<n && a[k+b]<=x)
        {
            k+=b;
        }
        if (a[k]==x)
        {
            cout<<"found";
            f=1;
            break;
        }
    }
    if (f==0)
    {
        cout<<"not found";
    }
    return 0;
}
