#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        /*for(int i=0; i<n; i++)
        {
            s[i]=tolower(s[i]);
        }*/
        sort(s.begin(), s.end());
        cout<<s;
        
    }
}