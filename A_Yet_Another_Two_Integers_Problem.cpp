#include<bits/stdc++.h>
#define ll long long
using namespace std; 
int main()
{

    ll t;
    ll a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(b < a){
            swap(a,b);
        }
        ll sub = 0,sum = 0,div = 0,mod = 0;
        sub = b - a;
        div = sub / 10;
        mod = sub % 10;
        sum = div;
        if(mod > 0){
            sum++;
        }
        cout<<sum<<endl;
    }

    return 0;
}