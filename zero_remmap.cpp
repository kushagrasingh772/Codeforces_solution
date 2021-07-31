#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		map<ll,ll> m;
		for(ll i=0;i<n; i++){
			ll a;
			cin>>a;
			ll x=a%k;
			if(x!=0){
				m[k-x]++;
			}
		}
		ll y=0;
		for(auto i:m){
			ll a=i.second,b=i.first;
			y=max(y,1+b+(a-1)*k);
		}
		cout<<y<<endl;
	}
}