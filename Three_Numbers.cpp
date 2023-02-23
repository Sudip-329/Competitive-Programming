/*#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,maxi=0;
	    cin>>a>>b>>c;
	    if(a==b && b==c && c==a)
	    {
	        cout<<0<<endl;
	    }
	    else if(a==b || b==c || c==a)
	    {
	        maxi = max(a,max(b,c));
	        //cout<<maxi;
            if((maxi-a)>=2)
            {
                cout<<((maxi-a)/2)<<endl;
            }
            else{
                cout<<-1<<endl;
            }
	    }
        else
        {
            cout<<-1<<endl;
        }
	}
	return 0;
}


not done
