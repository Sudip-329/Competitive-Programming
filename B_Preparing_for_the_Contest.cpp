#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int>ans;
        int count = 0;
        int temp = n-k;
        int a = n-k;
        for(int i=0; i<n; i++)
        {
            if(count<=k){
                ans.push_back(temp);
                count++;
                temp++;
            }
            else{
                ans.push_back(--a);
                //temp--;
            }
        }
        for(int i=0; i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
}