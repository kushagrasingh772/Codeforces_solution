#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll c=0;
    ll c2=0;
    ll n,i,j;
    ll k=1;
    cin>>n;
    vector <bool> v(n+1,true);
    vector <ll> v2(n+1,1);
    v[0]=v[1]=false;
    for ( i = 3; i*i <=n; i+=2)
    {
        if (v[i]==true)
        {
            for ( j = i*i; j <=n; j+=i)
            {
                v[j]=false;
            }
        }
    }
    v2[0]=2;
    for ( i = 1; i <=n; i++)
    {
        if (v[i]==true && i%2!=0)
        {
            v2[k]=i;
            k++;
        }
    }
    for ( i = 6; i <=n; i++)
    {
        for ( j = 0; j < k; j++)
        {
            if (i%v2[j]==0 && v2[j]<=i)
            {
                c++;
            } 
        }
        if(c==2)
        {
            c2++;
        }
        c=0;
    }
    cout<<c2<<endl;
    return 0;
}