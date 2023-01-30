#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,last;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	        if(a[i]<8)
	        {
	            last = i+1;
	        }
	    }
	    cout<<last<<endl;
	}
	return 0;
}