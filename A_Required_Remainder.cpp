#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long x , y , n ;
    cin >> x >> y >> n ;
    long long cnt = n / x ;
    long long ans = x * cnt + y ;
    if (ans > n)
    {
        ans -= x ;
    }
    cout << ans << endl;
    }
}