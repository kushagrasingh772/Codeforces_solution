#include<bits/stdc++.h>
using namespace std;
#define fo(i,s,n)    for(auto i=s;i<n;++i)
#define foo(i,s,n)    for(auto i=s;i>=n;--i)
#define ll long long
#define ull unsigned long long int
#define fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(t)            int t; cin>>t; while(t--)
const int MOD = 1000000007;
ll mod(ll x){
    return (x%MOD + MOD)%MOD;
}
ll mul(ll a , ll b){
    return mod(mod(a)*mod(b));
}
bool comp(pair<ll,ll>& a, pair<ll,ll>& b)
{
    if(a.second == b.second)
    return a.first > b.first;
    else
    return b.second < a.second;
}
static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int main()
{
    fast
    w(t)
    {
        ll n;
        cin>>n;
        vector<ll> nums(n);
        for(ll i=0;i<n;i++)
        {

            cin>>nums[i];
        }
        sort(nums.rbegin(),nums.rend());
        ll p1=0,p2=0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                p1 += nums[i];
            }
            else  if(i==1 || i==2)
            {
                p2 += nums[i];
            }
            else if(i%2==1)
            {
                p1 += nums[i];
            }
            else if(i%2==0)
            {
                p2 +=nums[i];
            }
        }
        ll pp1=0,pp2=0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                pp2 += nums[i];
            }
            else  if(i==1 || i==2)
            {
                pp1 += nums[i];
            }
            else if(i%2==1)
            {
                pp2 += nums[i];
            }
            else if(i%2==0)
            {
                pp1 +=nums[i];
            }
        }
        if(p1>p2)
        {
            cout<<"first"<<endl;
        }
        else if(pp1>pp2)
        {
            cout<<"second"<<endl;
        }
        else
        {
            cout<<"draw"<<endl;
        }


    }
    return 0;
}
