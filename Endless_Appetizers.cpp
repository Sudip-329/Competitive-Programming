#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,r,ans;
	    cin>>x>>y>>r;
	    if(r!=0)
	    {
	        r /= 30;
	    }
	    x +=r;
	    if(x%y==0)
	    {
	        cout<<x/y<<endl;
	    }
	    else{
	        cout<<x/y + 1<<endl;
	    }
	}
	return 0;
}