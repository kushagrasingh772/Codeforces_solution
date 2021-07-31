#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            /* code */
        }
        sort(arr,arr+n);
        int a=n/4;
        int b=a+a;
        int c=a+a+a;
        if (arr[a]==arr[a-1] || arr[b]==arr[b-1] || arr[c]==arr[c-1])
        {
            cout<<-1<<endl;
            /* code */
        }
        else
        {
            cout<<arr[a]<<" "<<arr[b]<<" "<<arr[c]<<endl;
            /* code */
        }
        
        /* code */
    }
    return 0;   
}