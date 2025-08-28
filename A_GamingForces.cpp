#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count =1,temp =0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);

        for(int i=0; i<n; i++)
        {
            if(a[i+1]==a[i])
            {
                count++;
                if(count>temp)
                {
                    temp = count;
                }
            }
            else{
                count =1;
            }
            //cout<<count<<endl;
        }
        //cout<<temp<<endl;
        if(temp==0)
        {
            cout<<n<<endl;
        }
        else{
            cout<<temp+1<<endl;
        }

        //cout<<temp<<endl;
    }
}