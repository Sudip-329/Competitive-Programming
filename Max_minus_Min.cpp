#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,max,min;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
        if(a>=b && a>=c)
        {
            max = a;
        }
        else if(b>=a && b>=c)
        {
            max = b;
                          // ans is c-a   as said a<b<c;
        }
        else{
            max = c;
        
        }

        if(a<=b && a<=c)
        {
            min = a;
        }
        else if(b<=a && b<=c)
        {
            min = b;
         
        }
        else{
            min = c;
        
        }
	    
	    cout <<(max-min)<<endl;

	}
	return 0;
}
