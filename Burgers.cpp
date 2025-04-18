#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x = min(a,b);
        cout<<x<<endl;
    }
	return 0;
}
