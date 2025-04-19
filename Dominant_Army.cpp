#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n1,n2,n3;
	    cin>>n1>>n2>>n3;
	    if((n1>n2+n3)||(n2>n1+n3)||(n3>n1+n2))
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}