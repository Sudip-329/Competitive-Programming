#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,k,n,p,c,min=0;
	    cin>>x>>y>>k>>n;
        for(int i=0; i<n; i++){
	        cin>>p>>c;
            if(p>=(x-y))
            {
                if(c<=k)
                {
                    min=1;
                }
            }
    
        }
        cout<<((min==1)? "LuckyChef":"UnluckyChef")<<endl;
	}
	return 0;
}