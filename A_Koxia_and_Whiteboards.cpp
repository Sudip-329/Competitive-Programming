#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long m,n,asum=0,bsum=0;
        cin>>n>>m;
        long long a[n],b[m];
        for(long long i=0; i<n; i++)
        {
            cin>>a[i];
            asum = asum+a[i];
        }

        for(long long i=0; i<m; i++)
        {
            cin>>b[i];
            bsum = bsum+b[i];
        }
        int i =0; int j= m-1;
        int temp = min(n,m);
        while(temp--)
        {
            asum -= a[i++];
            asum +=b[j--];
        }
        cout<<asum<<endl;

























        //sort(b,b+n);
        
        /*if(m>n)
        {
            for(long long i=n; i<m; i++)
            {
               // cout<<a[i]<<endl;
                sum = sum+a[i];
                //cout<<nsum<<endl;
            }
            cout <<sum<<endl;

        }
        else if(m<n)
        {
            for(long long i=(m-1); i<n; i++)
            {
                ksum = ksum+b[i];
            }
            cout<<ksum<<endl;

        }
        else if(m==n)
        {
            cout<<sum<<endl;
            
        }*/
        
    }
}