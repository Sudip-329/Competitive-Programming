#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    int x1,x2,len1,len2;
    len1=s1.length();
    len2=s2.length();
    
    if(s1[len1-1]==s2[len2-1])
    {
        if(s1[len1-1]=='S')
        {
            if(len1>len2) cout<<"<"<<endl;   //xxxxs < xs
            else if(len2>len1) cout<<">"<<endl;  //xs > xxxxs
            else cout<<"="<<endl;   //xs = xs
        }
        else if(s1[len1-1]=='L')
        {
            if(len1>len2) cout<<">"<<endl;  //xxxL > xL
            else if(len2>len1) cout<<"<"<<endl;  //xxL < XXXXXL
            else cout<<"="<<endl;  //xl = xl
        }
        else cout<<"="<<endl;  // only s=s or l=l
    }
    else
    {
        if(s1[len1-1]=='S')cout<<"<"<<endl;
        else if (s1[len1-1]=='L') cout<<">"<<endl;
        else
        {
            if(s2[len2-1]=='S') cout<<">"<<endl; //len1-1 has either m or x so >
            else  cout<<"<"<<endl;
        }
    } 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}