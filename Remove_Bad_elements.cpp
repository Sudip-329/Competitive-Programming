#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=1;
	    int max=0;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	        if(arr[i]==arr[i-1])
            {
	            count++;
	        }
	        else{
	            count=1;
	        }
	        if(count>max)
            {
	            max=count;
	        }
	    }
	   cout<<n-max<<endl;
	}
	return 0;
}