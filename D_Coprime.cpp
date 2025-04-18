#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;
    while(t--)
    {
    int n, max[100]={0}, i, j, k=0, flag=0; 
    cin>>n;

    int a[n];
    for (i=0; i<n; i++)
        cin>>a[i];

    max[0]=0;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
                int x1, p1;

                x1=a[i];
                p1=a[j];

                if (__gcd(x1, p1)==1)
                {
                    flag=1;
                    if (max[k]<(i+j))
                        max[k]=i+j;
                    k++;
                }
        }
    }

    if (flag==1)
    {
        int max1=0;
        for (i=0; i<k; i++)
        {
            if (max1<max[i])
                max1=max[i];
        }

        cout<<max1+2<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    }
    
    return 0;

}