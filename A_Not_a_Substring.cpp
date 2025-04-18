#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int flag = 0;
        vector<char>ans;
        int n =s.length();
        for(int i=0; i<s.length();i++)
        {
            if(s[i]==')')
            {
                if(s[i+1]=='(')
                {
                    //ans.push_back('{');
                    flag = 1;
                    ans.push_back('(');
                    ans.push_back('(');
                    ans.push_back(')');
                    ans.push_back(')');
                    //ans.push_back('k');
                    
                }
            }
            if(s[i]=='(')
            {
                if(s[i+1]=='(')
                {
                    flag=1;
                    ans.push_back('(');
                    ans.push_back(')');
                    ans.push_back('(');
                    ans.push_back(')');
                    i++;
                    //ans.push_back('[');
                    if(s[i+2]==')')
                    {
                        ans.push_back('(');
                        ans.push_back(s[i+2]);
                        //ans.push_back('[');
                    }
                }
            }
            else if(s[i]==')')
            {
                if(s[i+1]==')')
                {
                    ans.push_back('(');
                    ans.push_back(s[i]);
                    ans.push_back('(');
                    ans.push_back(s[i+1]);
                    //ans.push_back('[');

                }
            }
        }
        if(flag == 1)
        {
            cout<<"YES"<<endl;
            int a = ans.size();
            /*if(a<2*n)
            {
                ans.push_back('(');
                ans.push_back(')');
            }*/
            for(int i =0; i<ans.size();i++)
            {
                cout<<ans[i];
            }
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
}