#include <bits/stdc++.h>
#define lng long long
using namespace std;

void solve()
{
    lng test, n, m,temp=0;
    string x, y,str;
    cin>>n >> m >> x>>y;
    map<char, int> count;

    if(m > n)
    {
        temp = n;
        n=m;
        m=temp;

        str = y;
        y=x;
        x= str;
    }

    for(int i=0; i<n; i++){
    count[x[i]] += 1;}

    for(int i=0; i<m; i++){
    count[y[i]] -= 1;}

    int fg = 1, q = 0, df = n-m;
    for(auto p : count)
    {
        if(p.second < 0)
        {
            fg = 0;
            break;
        }
        if(p.second % 2 == 0)
        {
            continue;
        }
        if(q){
        fg = 0;}
        else{
        q = 1;}
    }
    if(fg)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}



int main() {
    lng test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}