#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// if write this optimize then time complexity reduces.
 
int main()
{
	optimize();
 
    int t;
    cin>>t;
    while(t--)
    {
        long long n,r;
        cin>>n;
        long long a[n+4];
        long long sum=0;
        for(long long i=0;i<n;i++)
        {
          cin>>a[i];
          //sum+=a[i];
        }
        for(long long i=0;i<n;i++)
            sum+=a[i];
 
        r=abs(sum);
        cout<<r<<endl;
    }
 
 
return 0;
}
