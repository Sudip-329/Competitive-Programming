#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int ans = b*c;
	    if(ans>=a)
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