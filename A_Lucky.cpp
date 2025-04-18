//Author : Sudip Chakrabarty
//Kalinga Institute of Industrial Technology
//Codeforces Round #790 (Div. 4)
//A. Lucky?
//time limit per test1 second
//memory limit per test256 megabytes


#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if((s[0]+s[1]+s[2])==(s[3]+s[4]+s[5]))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}