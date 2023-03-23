not done

/*#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
        int count=0,flag=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                count++;
            }
            if((s[i]=='+' && s[i+1]=='-')|| (s[i]=='-' && s[i+1]=='+'))
            {
                flag = 1;

            }
        }
        if(count==n)
        {
            cout<<count<<endl;
        }
        if(flag == 1)
        {
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }

	}
	return 0;
}
