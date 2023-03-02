#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int x= 100-a;
	    int y= 200-(2*b);
	    if(x>y)
	    {
	        cout<<"SECOND"<<endl;
	    }
	    else if(x<y)
	    {
	        cout<<"FIRST"<<endl;
	    }
	    else
	    {
	        cout<<"BOTH"<<endl;
	    }
	}
	return 0;
}
