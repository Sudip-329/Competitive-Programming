#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b;
        cin>>n;
        vector<int>a;
        for(int i=0; i<n; i++)
        {
            cin>>b;
            a.push_back(b);
        }
        int count=1,maxi=INT_MIN,mini=INT_MAX;
        for(int i=0; i<n-1; i++)
        {
            if(abs(a[i]-a[i+1])<=2)
            {
                count++;
            }
            else{ 
                mini=min(mini,count);
                maxi = max(maxi,count);
                count=1;
            }
        }
        mini=min(mini,count);
        maxi = max(maxi,count);
        cout<<mini<<" "<<maxi<<endl;
    }
}