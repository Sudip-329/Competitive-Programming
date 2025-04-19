#include<iostream>
#include<bits/stdc++.h>
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
        int evnsum = 0,oddsum = 0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2 == 0)
            {
                evnsum +=arr[i];
                
            }
            else{
                oddsum +=arr[i];
            }
        }
        if(evnsum %2 == 0 && oddsum %2 ==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}