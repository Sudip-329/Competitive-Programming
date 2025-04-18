#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        int n,solved = 0;
        cin>>n;
        unordered_map<char , int> map;
        string c;
        cin>>c;
        for(char ch: c){ 
           map[ch]++;
        }

        for(auto i : map){
        if(i.second >= i.first - 'A' + 1)
        {
        solved++;
        }}

        cout<<solved;
        cout<<endl;
    }
}