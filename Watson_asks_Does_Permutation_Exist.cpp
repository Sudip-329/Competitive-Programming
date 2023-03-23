#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,flag =0;
	    cin>>n;
	    int *arr = new int [n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    
	    for(int i=0; i<n-1; i++)
	    {
	        if(abs((arr[i]-arr[i+1]))>1)
	        {
	            flag =1;
	        }
	    }
	    if(flag)
        {
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
        cout<<endl;
	}
	return 0;
}
