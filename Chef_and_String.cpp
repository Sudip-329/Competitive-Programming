#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
        vector<char>lans;
        vector<char>rans;
	    string s;
	    cin>>s;

    /*string l= s.substr(1, s.length() - 1) + s.substr(0,1);
    string b=s.back() + s.substr(0, s.length() - 1);
    cout<<l<<" "<<b;*/

	    for(int i=1; i<s.length(); i++)  //left shift
	    {
	        lans.push_back(s[i]); //from 2nd character to last (store)
	    }
	    lans.push_back(s[0]); //storing 1st element as last in the vector.

        rans.push_back(s[(s.length()-1)]);  //right shift, so last element will come first
	    for(int i=0; i<s.length()-1; i++)
	    {
	        rans.push_back(s[i]);//after storinh last element storing the remaining.
        } 
        cout<<(rans==lans ? "YES" : "NO")<<endl;  
    }
	return 0;
}