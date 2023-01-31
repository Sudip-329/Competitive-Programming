#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int sum =0;
    while(n--)
    {
        cin>>s;
        if(s[0] =='I')
        {
            sum+=20;
        }
        else if(s[0] == 'C')
        {
            sum+=6;
        }
        else if(s[0] == 'O')
        {
            sum+=8;
        }
        else if (s[0] == 'D')
        {
            sum+=12;
        }
        else
        {
            sum+=4;
        }
    }
    cout<<sum;
}