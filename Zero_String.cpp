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
        int o = count(s.begin(), s.end(), '1');
        int z = count(s.begin(), s.end(), '0');
        if(z==0)
        {
            cout<<1;
        }
        else if(o==z)
        {
            cout<<o;
        }
        else if(o>z)
        {
            cout<<(z+1);
        }
        else{
            cout<<o;
        }
        cout<<endl;

        //cout<<c;
	    
	    

	}
	return 0;
}