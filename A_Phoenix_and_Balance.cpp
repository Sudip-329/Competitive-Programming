#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        vector<int>ans;
        int n,asum=0,bsum=0,anst=0,a=0;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            ans.push_back(pow(2,i));
        }
        a = n/2;
        asum=ans[n-1];  // holding last value
        for(int i=0; i<a-1; i++)
        {
            asum+=ans[i];
        }
        for(int i=a-1; i<n-1; i++)
        {
            bsum+=ans[i];
        }
        anst= abs(asum-bsum);

        cout<<anst<<endl;
    }
}