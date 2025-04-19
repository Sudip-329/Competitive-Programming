#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int a,b,n,sgcd=0,agcd=0;
    cin>>a>>b>>n;
    while(n!= (-1))
    {
        sgcd = __gcd(a, n);
        n = n-sgcd;
        //cout<<n<<" here";
        if(n==0)
        {
            cout<<0<<endl;
            return 0;
        }
        agcd = __gcd(b, n);
        n = n-agcd;
        if(n==0)
        {
            cout<<1<<endl;
            return 0;
        }
    }
}