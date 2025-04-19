#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long d1,d2,d3,a1,a2,a3,a4,ans;
    while(cin>>d1>>d2>>d3)
    {
      a1=d1+d2+d3;
      a2=2*d1+2*d2;
      a3=2*d1+2*d3;
      a4=2*d2+2*d3;
      ans=min(a1,min(a2,min(a3,a4)));
      cout<<ans<<endl;
    }
    return 0;
}