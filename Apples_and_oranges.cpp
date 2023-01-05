//Sudip Chakrabarty
//Starters 72 C

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    
	    if(m>n )
	    {
	        if(m%n == 0)
	        {
	            cout<<n<<endl;
	        }
	        else
	        {
	            int y = __gcd(n,m);
	            cout<<y<<endl;
	            
	        }
	    }
	    else{
	        if(n%m == 0)
	        {
	            cout<<m<<endl;
	        }
	        else
	        {
	            int y = __gcd(n,m);
	            cout<<y<<endl;
	            
	        }
	        
	    }
	}
	return 0;
}
