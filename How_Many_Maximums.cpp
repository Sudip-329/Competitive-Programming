#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a=0;;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n-2;i++)
	    {
	        if(s[i]=='0' && s[i+1]=='1')
	        a++;
	    }
	    if(s.at(n-2)=='0')
	    a++;
	    if(s.at(0)=='1')
	    a++;
	    
	    cout<<a<<endl;
	}
	return 0;
}
