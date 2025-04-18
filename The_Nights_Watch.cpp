#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0;

	    if(s[0]=='0')
	    {
	        if(s[1]=='0'){
	        count++;
            s[0]='1';
	        }
	    }
	    for(int i =0; i<n-2; i++)
	    {
	        if(s[i]=='0' && s[i+1]=='0' && s[i-1]=='0')
	        {
	            count++;
                s[i]='1';
	        }
	    }
        if(s[n-1]=='0' && s[n-2]=='0')
        {
            count++;
            s[n]='1';
        }
        if(n==1)
        {
            cout<<1<<endl;
        }
        else{
	    cout<<count<<endl;
        }
	}
	return 0;
}