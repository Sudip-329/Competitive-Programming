#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);                //no need to think more just they want sorting here.
    for(int i =0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}