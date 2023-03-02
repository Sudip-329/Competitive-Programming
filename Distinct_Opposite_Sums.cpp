#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void answer()
{
    int N;
    cin>>N;
    int a=1,b=N;
    while(a<b)
    {
        cout<<a<<" "<<b<<" ";
        a++;
        b--;

    }
    cout<<endl;
}

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        answer();
    }
}