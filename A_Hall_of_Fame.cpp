//Sudip Chakrabarty
// 1779A. Hall of Fame
// time limit per test1 second
// memory limit per test256 megabytes

#include<string>
#include<bits/stdc++.h>
#include<iostream>                    // test can was changed after contest. 
using namespace std;                  // last two answer 2 and 3.
 
void solve()
{
        int helllo,count =0;
        cin>>helllo;
        string strrw;
        cin>>strrw;
        int riht = 0;
        for(int i=0; i<helllo; i++)
        {
            if(strrw[i]=='R')
            {
                riht++;

            }
        }
        if(riht == 0 or riht == helllo)
        {
            cout<<-1<<endl;
            return ;
        }
        for(int i=0; i<helllo; i++)
        {
            if(strrw[i]== 'L' and strrw[i+1]=='R')
            {
                cout<<i+1<<endl;
                return ;
                count =0;
            }
            if(strrw[i]== 'R' and strrw[i+1]=='L')
            {
                count++;
                //cout<<count<<endl;
                //return ;
            }
        }
        //cout<<count<<endl;
        if(count>0)
        {
            cout<<0<<endl;
        }

    }


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
