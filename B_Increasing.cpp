#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void math()
{
    int n,i,j,x=0;

    cin>>n;

    int arr[n];
    for(i =0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);
    
    for(i =0; i<n-1;i++)
    {
        if(arr[i] == arr[i+1])
        {
            x=1;
            break;
        }
    }
        if(x==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout <<"NO\n";
        }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        math();
    }
    return 0;
}