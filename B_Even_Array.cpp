#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,even =0, odd =0, fine = 0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n; i++)
        {
            if(i%2 ==0)
            {
                if(a[i]%2 == 0)
                {
                    fine++;
                }
                else{
                    even++;
                }

            }
            else{
                if(a[i]%2 != 0)
                {
                    fine++;
                }
                else{
                    odd++;
                }
            }
        }
        if(fine==n)
        {
            cout<<0;
        }
        else if(even == odd)
        {
            cout<<even;
        }
        else{
            cout<<-1;
        }
        cout<<endl;
    }
}