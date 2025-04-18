#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector< ll >a(n),b(n);
    ll mina=1e18, minb=1e18;
    for(int i=0; i<n; i++)    //find minimum element in a
    {
        cin>>a[i];
        mina=min(mina,a[i]);
    }
    for(int i=0; i<n; i++)   //find minimum element in b
    {
        cin>>b[i];
        minb=min(minb,b[i]);
    }
    ll total=0;
    for(int i=0; i<n; i++)
    {
        ll d1= a[i]-mina;   //everytime subtract the minmum element and add the max
        ll d2 = b[i]-minb;//of the answers.
        total +=max(d1,d2);
    }
    cout<<total<<endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}