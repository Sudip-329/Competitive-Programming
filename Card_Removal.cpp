#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count = 0,temp =0;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0; i<n; i++)
	    {
            count = 0;
	        for(int j=0; j<n; j++)
	        {
	            if(a[i]==a[j])
	            {
	                count++;
	            }
	            if(count>temp)
	            {
	                temp = count;
	            }
	        }
	    }
	    if(temp == n)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        cout<<(n-temp)<<endl;
	    }
	    
	}
	return 0;
}
