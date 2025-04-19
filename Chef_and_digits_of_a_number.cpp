#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int count=0,zcount=0;
	    int n=s.length();
	    for(int i=0;i<n; i++)
	    {
	        if(s[i]=='1')
	        {
	            count++;
	        }
	        else{
	            zcount++;
	        }
	    }
	    if(count==1 or zcount==1 )
	    {
	        cout<<"Yes";
	    }else{cout<<"No";}
	    cout<<endl;
	   
	}
	return 0;
}