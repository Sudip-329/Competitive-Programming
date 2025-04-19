//Mar/07/23 16:20UTC+5.5 Sudip_Chakrabarty A - FashionabLee GNU C++17 Accepted 15ms 0 KB

#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n % 4 == 0){
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
