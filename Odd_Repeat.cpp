#include <iostream>
using namespace std;

int main() {

	int t,n,k,s;
	cin >>t ;
	while(t--) 
	{
	    cin >>n>>k>>s;
	    cout << (s - (n*n))/(k-1) << endl;
	}
	return 0;
}