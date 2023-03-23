#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    if((n%2!=0 && m%2!=0) || n==1 || m==1)
	    {
	        cout<<"No";
	    }
	    else 
        {
	        cout<<"Yes";
	    }
	    cout<<endl;
	}
	return 0;
}
