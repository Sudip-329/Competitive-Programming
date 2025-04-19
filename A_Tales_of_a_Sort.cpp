#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>n)
            {
                ans = arr[i];
                break;
            }
            if(arr[i]>arr[i+1])
            {
                for(int j=0; j<n; j++)
                {
                    arr[j] = max(0,(arr[j]-1));
                }
                ans++;
                i=0;
            }
        }
        cout<<ans<<endl;
    }
}
