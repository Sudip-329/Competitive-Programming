#include<bits/stdc++.h>
using namespace std;           // Given testcases are wrong.

#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tt; cin>>tt;
    while (tt--) {
        int n; cin>>n;
        if (n==3) cout<<"NO\n";
        else if (n%2==0) {
            cout<<"YES\n";
            rep(i,n) {
                if (i%2==0) cout<<1<<" ";
                else cout<<-1<<" ";
            }
            cout<<"\n";
        }
        else {
            int a{n-3}, b{-n+1};
            cout<<"YES\n";
            rep(i,n) {
                if (i%2==0) cout<<a<<" ";
                else cout<<b<<" ";
            }
            cout<<"\n";
        }
    }
}