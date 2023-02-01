#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z,min;
	    cin>>x>>y>>z;
	    if(x<y && x<z)
	    {
	        min=x;
	    }
	    else if(y<x && y<z)
	    {
	        min=y;
	    }
	    else{
	        min =z;
	    }
        if(min==x)
        {
            cout<<"ALICE";
        }
        else if(min==y)
        {
            cout<<"BOB";
        }
        else{
            cout<<"CHARLIE";
        }

	    cout<<endl;
	}
	return 0;
}