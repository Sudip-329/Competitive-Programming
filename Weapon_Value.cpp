#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string xoring(string a,string b,int n)
{
    string p ="";
    for(int i=0; i<n; i++)
    {
        if(a[i]==b[i])
        {
            p+="0";
        }
        else{
            p+="1";
        }
    }
    return p;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
        string s;
        string r="0000000000";
	    for(int i=0; i<n; i++)
        {
            cin>>s;
            r = xoring(r, s, 10);
            
        }
        cout<<count(r.begin(), r.end(), '1')<<endl;
	}
	return 0;
}