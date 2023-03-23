#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if((y*30)<=x)
	    {
	        cout<<"YES";
	    }
	    else{
	        cout<<"NO";
	    }
	    cout<<endl;
	}
	return 0;
}