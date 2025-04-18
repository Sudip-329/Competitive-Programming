
// 358 ms
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define ll long long
#define ld long double
#define endl '\n'
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      ll n,k;
      cin>>n>>k;
      ll a[n];
      ll i =0;
      for(ll i =0; i<n; i++)
      {
         cin>>a[i];
      }
      sort(a, a+n);
      ll ans = 0;
      while(i<n)
      {
         int j = i+1;
         while(j<n){
            if(a[j]- a[j-1]>k){
               break;
            }
            j++;
         }
         ll tt = j - i;
         ans = max(ans,tt);
         i = j;
      }
      cout<< n - ans <<endl;
   }
}