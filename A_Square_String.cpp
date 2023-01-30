#include <iostream>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n=s.length();
    int a=(n/2)-1;
    int b=n-1;
    if(n%2!=0)
    {
        cout<<"NO"<<endl;
    }
    else{
    while(b>(n/2)-1)
    {
        if(s[a]!=s[b])
        {
            cout<<"NO"<<endl;
            return ;
        }
        else{
            a--;
            b--;
        }
    }
    cout<<"YES"<<endl;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        solve();
    }
}