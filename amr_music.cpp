#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,d,i,a;
    cin >> n>>d;
    vector<pair<int,int>> v;
    for ( i = 0; i <n; i++)
    {
        cin>>a;
        v.push_back(make_pair(a,i+1));
    }
    sort(v.begin(),v.end());
    for ( i = 0; i <n; i++)
    {
        d-=v[i].first;
        if (d<0)
        {
            break;
        }
    }
    cout<<i<<endl;
    while(i--){
        cout<<v[i].second<<" ";
    }
    return 0;
}