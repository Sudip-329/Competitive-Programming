#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    if((m*k)>=n)
	    {
	        cout<<"Yes";
	    }
	    else{
	        cout<<"No";
	    }
	    cout<<endl;
	}
	return 0;
}