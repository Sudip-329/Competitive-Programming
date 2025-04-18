// Sudip Chakrabarty
// 1722A. Spell Check
// time limit per test1 second
// memory limit per test256 megabytes

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string t="Timur";
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s==t)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}