#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n;
	    cin>>n;
        
	    for(int index=0; index<n; index++)
        //int index =0;
        //for (auto index = 0 :n)
	    {
            //cout<<index/2;
	        if(index%2 == 0)
	        {
	            cout<<1<<" ";
	        }
	        else{
	            cout<<0<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}