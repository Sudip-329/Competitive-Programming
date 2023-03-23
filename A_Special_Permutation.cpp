#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
        vector<int>ans;
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            ans.push_back(n-i);
        }

        for(int i=0; i<n; i++)
        {
            if(ans[i] == i+1){
                swap(ans[i],ans[i+1]);
            }
        }

        for(int i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
//ans may vary