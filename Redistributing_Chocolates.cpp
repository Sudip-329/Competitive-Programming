#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int ans = x+y+z;
	    if(ans>=6)
	    {
	        cout<<"YES";
	    }
	    else
	    {
	        cout<<"NO";
	    }
	    cout<<endl;

	}
	return 0;
}