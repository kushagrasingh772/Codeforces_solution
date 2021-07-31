#include<bits/stdc++.h>
using namespace std;
typedef long long int l;
int main()
{
    l t;
    cin>>t;
    while (t--)
    {
        l pc,pr;
        cin>>pc>>pr;
        l c1,c2=0;
        c1=pc/9;
        c2=pr/9;
        if (c1==c2)
        {
            if (c1==0)
            {
                cout<<1<<" "<<1<<endl;
            }
            else if (pc%9==0)
            {
                cout<<1<<" "<<c1<<endl;
            }
            else
            {
                cout<<1<<" "<<c1+1<<endl;
            } 
        }
        else if (c1<c2)
        {
            if (pc%9==0)
            {
                cout<<0<<" "<<c1<<endl;
            }
            else
            {
                cout<<0<<" "<<c1+1<<endl;
            }   
        }
        else
        {
            if (pr%9==0)
            {
                cout<<1<<" "<<c2<<endl;
            }
            else
            {
                cout<<1<<" "<<c2+1<<endl;
            }
        }
    }
    return 0;
}
