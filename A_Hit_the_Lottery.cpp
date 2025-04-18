#include<bits/stdc++.h>
using namespace std;
int main()      //easy one;
{
    int n,ans=0;
    int a[]={100,20,10,5,1};
    cin>>n;
    for(int i=0; i<5; i++)
    {
        ans+=n/a[i];
        n=n%a[i];
    }
    cout<<ans<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    if(n!=0)
    {
        if(n>=100)
        {
            sum = sum +(n/100);
            n = n%100;
        }
        if(n>=20)
        {
            sum = sum +(n/20);
            n = n%20;
        }
        if(n>=10)
        {
            sum = sum+ (n/10);
            n = n%10;
        }
        if(n>=5)
        {
            sum = sum + (n/5);
            n= n%5;
        }
        if(n<=4)
        {
            sum = sum + n;
        }
        cout<<sum;
    }
}