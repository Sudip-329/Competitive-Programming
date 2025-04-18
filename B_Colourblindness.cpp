#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        string arr,brr;
        cin>>arr>>brr;

        for(int i=0; i<n; i++)
        {
            if((arr[i] != brr[i]) && (arr[i]=='R' || brr[i]=='R'))
            {
                count=1;
            }
        }
        if(count)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
