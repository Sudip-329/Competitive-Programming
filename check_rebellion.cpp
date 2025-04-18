#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        int n,k=0,c=0,i,sum=0;
        
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

         for(i=0; i<n; i++)
        {

            if(a[i]<a[i+1] || a[i]==a[i+1])
            {
                c++;
            }

            else if(a[i]>a[i+1])
            {
                sum= a[i]+a[n-1];
                k++;
            }

        }
        cout<<k<<endl;
    }
}