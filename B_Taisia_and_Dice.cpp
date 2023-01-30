#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        ll m,s,r;
        cin>>m>>s>>r;
        ll sudip = s-r;
        ll remainder = (r%(m-1));
        ll mid=(r/(m-1));
        cout<<sudip<<" ";
        for(ll i=1; i<m; i++)
        {
            if(remainder>0)
            {
                cout<<mid+1<<" ";
                remainder--;
            }
            else cout<<mid<<" ";
        }
        cout<<endl;
    }
}