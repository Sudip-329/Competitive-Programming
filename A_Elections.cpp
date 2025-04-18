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
        int a,b,c,x,y;
        cin>>a>>b>>c;
        x = max(a,b);
        y = max(b,c);
        int z = max(x,y);
        if(a==b && c==b)
        {
            cout<<1<<" "<<1<<" "<<1<<endl;
        }
        else if (a == b && z == a) {
            cout << 1 << " " << 1 << " " << (a - c) + 1 << endl;
        }
        else if (a == c && z == a) {
            cout << 1 << " " << (a - b) + 1 << " " << 1 << endl;
        }
        else if (b == c && z == b) {
            cout << (b - a) + 1 << " " << 1 << " " << 1 << endl;
        }
        else if(z==a)
        {
            cout<<0<<" "<<((z-b)+1)<<" "<<((z-c)+1)<<endl;
        }
        else if(z==b)
        {
            cout<<((z-a)+1)<<" "<<0<<" "<<((z-c)+1)<<endl;
        }
        else{
            cout<<((z-a)+1)<<" "<<((z-b)+1)<<" "<<0<<endl;
        }
    }
}