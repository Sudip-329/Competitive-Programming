#include <bits/stdc++.h>
using namespace std;
typedef long ll;
int main()
{
    string s;
    cin>>s;
    char start='a';
    ll sum=0;
    for(int i=0;i<s.size();i++)
    {
        ll a=abs(s[i]- start);        //a = 97 and z = 122  so a = 122-97 = 25
        ll b=26-a;                    //b = 26-25=1   1st add 1 then fo on...
        sum+=min(a,b);
        start=s[i];
    }
    cout<<sum<<endl;
}