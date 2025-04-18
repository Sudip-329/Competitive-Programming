#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ch;
        cin>>ch;
        string s="codeforces";
        int count=0;
        for(int i=0; i<s.length(); i++)
        {
            if(ch==s[i])
            {
                count++;
                break;
            }
        }
        if(count==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}