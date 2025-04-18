#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum =0;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	        if(a[i]%2 != 0)
	        {
	            sum++;
	        }
	    }
	    if(sum%2 != 0 and n>1)
	    {
	        cout<<2<<endl;
	    }
	    else
	    {
	        cout<<1<<endl;
	    }
    }
	return 0;
}
