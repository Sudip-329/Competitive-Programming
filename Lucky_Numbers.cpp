#include <iostream>
using namespace std;

void solve()
{
	    int x;
	    cin>>x;
        int count = 0;
        int ans = 0;
	    while(x!=0)
	    {
	        ans = x%10;
	        x = x/10;
	        if(ans == 7)
	        {
	            count++;
	        }
	    }
        //cout<<count;
	    if(count>0)
	    {
	    cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        solve();
    }
    return 0;
}