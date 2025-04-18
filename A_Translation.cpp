#include<iostream>
using namespace std;
int main()
{
    string s,t;
    cin >>s>>t;
    int c =0;
    int x= s.length();
    for(int i =0; i<x; i++)
    {
        if(s[x-1-i]==t[i])
        {
            c++;
        }
    }
    if(c==x)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}