#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,A=0,i;
        cin >>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            cout<<a[i];

            if(a[i]=='Q')
            {
                count++;
                
            }
            if(a[i]=='A')
            {
                A++;
            }
        }
        if(count<=A)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}