#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n, y;
        cin>>n>>y;
        int ans = 0;

        for(int w=0; w<n ; w++)
        {
            int a;
            cin>>a;
            ans |= a;
        }

        int x = y- ans;
        if((x & y) == x)
        {
            cout<< x<<endl;
        }
        else 
        {
            cout<<-1<<endl;
        }
    
    }

}


















/*#include <iostream>
using namespace std;

void solve()
{
	    int n,y,ans =0,b=0;
	    cin>>n>>y;
	    int a[n];
	    for(int w=0; w<n; w++)
	    {
	        cin>>a[w];
	    }
	    
	    for(int w=0; w<n; w++)
	    {
	        ans = ans | a[w] | a[w+1];
            
	    }
        //cout<<ans<<endl;
        b = y-ans;
        //cout<<b<<endl;
        if((ans | b) == y)
        {
            cout<<abs(b)<<endl;
        }
        else{
            cout<<"here"<<-1<<endl;
        }
	}



int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        solve();
    }
}*/