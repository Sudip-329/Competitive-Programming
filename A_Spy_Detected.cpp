#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);     
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }
        for(int i=1; i<=n; i++)
        {
            if(a[i]==a[i+1])
            {
                
                continue;
            }
            else{
                //cout<<i;
                cout<<(i+2)<<endl;
                break;

            }
            
        }
    }
}