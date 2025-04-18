#include <iostream>
using namespace std;

int main() {
	string s;
	int flag=1;
	cin>>s;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
	        i+=2;
	        if(!flag){
	            cout<<" ";    // didnt come same as output 
	        }
	        continue;
	    }else {
	        flag=0;
	        cout<<s[i];
	    }
	}
	return 0;
}

/*
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            i = i + 2;
            cout << " ";
        }
        else
        {
            cout << s[i];
        }
    }
}*/