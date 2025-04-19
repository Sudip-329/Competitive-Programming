#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int a = x-y;
		//cout<<a;
	    int b = x * (.1);
		//cout<<b;
	    int c= x+b;
	    cout<<c-a<<endl;
	}
	return 0;
}