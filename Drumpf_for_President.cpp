#include <iostream>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    ll c,i,count=0,b[n+1],a[n+1];
	    for(i=0;i<n+1;i++){
	    b[i]=0;
	    a[i]=0;
    	}
	    for(i=1;i<=n;i++){
	        cin>>c;
            if(c!=i){
	        b[c]++;
            }
            else{
                a[i]=c;
            }
	    }
	    for(i=1;i<n+1;i++){
	        if(b[i]>=k){
	            if(a[i]!=i)
	            count++;
	        }
	    }
	    cout<<count;
	    cout<<endl;
	}
	return 0;
}
