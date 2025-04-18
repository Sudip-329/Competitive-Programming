#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,arr[200],count=0;
    cin>>n>>p;   //if take q here will not work
    for(int i=0; i<p; i++)
    {
        cin>>arr[i];
    }
    cin>>q;
    for(int i=p; i<p+q; i++)
    {
       cin>>arr[i];
    }

    sort(arr,arr+(p+q));
    

    for(int i=0; i<p+q; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            count++;
        }
    }
    //cout<<count; will be 4; for first taste case

    if(count==n)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
}