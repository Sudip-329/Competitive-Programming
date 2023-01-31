#include<iostream>
using namespace std;
int main()
{
    int n,c=0,x=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='A')
        {
            c++;
        }
        else{
            x++;
        }
    }
    if(c>x)
    {
        cout<<"Anton";
    }
    else if(c==x)
    {
        cout<<"Friendship";
    }
    else{
        cout <<"Danik";
    }

}
