#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m;
        int arr[100];
        int arc[100];
        
        for(k=0; k<m; k++)
        {
            cin>>arr[k];
            cin>>arc[k];
        }

        if(m<n)
        {
            cout<<"YES"<<endl;
        }
        else
        {    
            cout<<"NO"<<endl;
        }
    }
}
