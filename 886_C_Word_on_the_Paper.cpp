#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;       // good method
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      char ans[8][8];
      vector<char> anss;
      for(int i=0; i<8; i++)
      {
         for(int j=0; j<8; j++)
         {
            cin>>ans[i][j];
            if(ans[i][j]!='.')
            {
               anss.push_back(ans[i][j]);
            }
         }
      }

       for(int i=0; i<anss.size(); i++)
       {
         cout<<anss[i];
       }
       cout<<endl;
   }
}

/*
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define ll long long
#define ld long double
#define endl '\n'
void solve()
{
        vector<string> g(8);
        for (int i = 0; i < 8; i++) {
            cin >> g[i];
        }
    string wd;
    for (int cl = 0; cl < 8; cl++) {
        for (int rw = 0; rw < 8; rw++) {
            if (g[rw][cl] != '.') {
                while (rw < 8 && g[rw][cl] != '.') {
                    wd += g[rw][cl];
                    rw++;
                }
                break;
            }
        }
    }
    cout<< wd<<endl;
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
}*/