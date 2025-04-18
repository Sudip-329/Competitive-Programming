#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,j,a,b;
    cin >>n;
    string s1, s2;

    while(n--)
    {
    cin >>s1>>s2;
        
    a = s1.length();
    b = s2.length();


    if(s1[a-1]==s2[b-1])
    {
        if(s1[a-1]=='S')
        {
        if(a>b)
        {
            cout<<"<\n";
        }
        else if(a<b)
        {
            cout<<">\n";
        }

        else
        {
            cout<<"=\n";
        }
        }
        else if (s1[a-1]=='L')
        {
            if(a>b)
        {
            cout<<">\n";
        }
        else if(a<b)
        {
            cout<<"<\n";
        }

        else
        {
            cout<<"=\n";
        }
        }
    }
    else
    {

    if(s1[a-1]=='L')
    {
        cout<<">\n";
    }

    else if (s1[a-1]=='S')
    {
        cout<<"<\n";
    }

   else
    {
        if(s2[b-1]=='S') cout<<">"<<endl;
        else  
        cout<<"<"<<endl;
    }
    }
}
}