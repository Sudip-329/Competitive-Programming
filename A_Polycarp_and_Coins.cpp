#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,ans1=0,ans2=0,rem;
        cin>>n;
        ans1 = n/3;
        ans2 = n/3;
        if(n%3==1)
        {
            ans1++;
        }
        else if(n%3==2)
        {
            ans2++;
        }
        cout<<ans1<<" "<<ans2;
        cout<<endl;
    }
}