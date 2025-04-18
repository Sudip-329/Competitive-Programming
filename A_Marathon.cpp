#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);     
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,count= 0;
        cin>>a>>b>>c>>d;
        if(a<b)
        {
            count++;
        }
        if(a<c)
        {
            count++;
        }
        if(a<d){
            count++;
        }
        cout<<count<<endl;
    }
}

/*#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int p = 0;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b > a) {
      p++;
    }
    if (c > a) {
      p++;
    }
    if (d > a) {
      p++;
    }
    cout << p << '\n';
  }
  return 0;
}*/