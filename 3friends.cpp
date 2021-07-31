#include<bits/stdc++.h>
using namespace std;
int main()
{
int t; 
cin >> t;
while(t--)
    {
    int a,b,c; 
    cin >> a >> b >> c;
    int ans = abs(a - b) + abs(b - c) + abs(a - c);
    cout << max(0, ans-4) << endl;
    }
    return 0;
}