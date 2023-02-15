#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if((x*10)>=y)
	    {
	        cout<<y*z;
	    }
	    else if((x*10)<=y)
	    {
	        cout<<(x*10*z);
	    }
	    cout<<endl;
	    
	    

	}
	return 0;
}