#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int sum =0;
	    int arr[n];
	    for (int i =0; i<n; i++)
	    {
	        cin>>arr[i];
	        sum = sum + arr[i];
	    }

	    int c = ((n*(n+1))/2);
        
		sort(arr,arr+n);
		int a=0,b=0;
		for(int i=0; i<n; i++)
		{
			if(arr[i]>i+1)
			{
				a = -1;
				break;
			}

		}
		if(a == -1)
		{
			cout << -1 <<endl;
		}
		else 
		{
			cout <<c - sum<<endl;
		}

	}
	return 0;
}
