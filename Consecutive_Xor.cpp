#include <iostream>
using namespace std;

int main() {

	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n;
        cin>>n;
        int  m=0;
        for(int k=0; k<n; k++)
        {
            int a;

            cin>>a;
            m^=a;
        }
        if(n%2==0)
        {
            if(m)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }
	
	}
	return 0;
}