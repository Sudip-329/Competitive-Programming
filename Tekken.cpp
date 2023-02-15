#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
        int minimum=min(b,c);  //min of b,c
        b=b-minimum;
        c=c-minimum;
        if(a>b && a>c)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

	}
	return 0;
}