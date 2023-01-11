#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y;
        cin>>x>>y;
        if(x==y)
        {
            cout<<x<<endl;
            continue;
        }
        long long int ans = x*y -x-y;
        if(ans<0)
        ans = 2*x*y-x-y;
        cout<<ans<<endl;
    }
}