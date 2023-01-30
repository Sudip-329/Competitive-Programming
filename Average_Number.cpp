#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n , k , v;
	    cin>>n>>k>>v;
	    int a[n] , sum=0;
	    for(int i=0 ; i<n ; i++){
	        cin>>a[i];
	        sum += a[i];
	    }
	    //v*(n+k)-a[n]/k
	    int x = ((v*(n+k))-sum);
	    
	    if(x%k==0 && x>0)
	    cout<<x/k<<endl;
	    else
	    cout<<"-1"<<endl;
	    
	}
	return 0;
}