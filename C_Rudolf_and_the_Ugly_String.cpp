#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
string s;
cin>>s;
int count=0;
for(int i=0; i<n; i++)
{
    //cout<<s[i]<<"now";
    if(s[i]=='m')
    {
        //cout<<"su";
        if(s[i+1]=='a')
        {
            //cout<<"di";
            if(s[i+2]=='p')
            {
                //cout<<"ch";
                count++;
                //cout<<i;
                i+=2;
                //cout<<i;
                //cout<<i<<"ok";
        }   }
    }
    else if(s[i]=='p')
    {
        if(s[i+1]=='i')
        {
            if(s[i+2]=='e')
            {
                count++;
                i+=2;
                //cout<<"here";
        }   }
    }
}
cout<<count<<endl;
}
}