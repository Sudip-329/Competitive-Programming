#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,b,nt=0,ans=0,temp =0;
	    cin>>n>>b;
	    for(int i=0; i<n; i++)
	    {
	        int w,h,p;
	        cin>>w>>h>>p;
	        if(p>b)
	        {
	            nt++;
	        }
	        else
	        {
	            ans = w*h;
	            if(ans>=temp)
	            {
	                temp = ans;
	                
	            }
	        }
	    }
	    if(nt==n)
	    {
	        cout<<"no tablet"<<endl;
	    }
	    else
	    {
	        cout<<temp<<endl;
	    }
	}
	return 0;
}