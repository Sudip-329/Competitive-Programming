//Sudip Chakrabarty
//Starters 72 d


#include<bits/stdc++.h>
using namespace std;
int prime(int n){
    if (n<=1)return false;
    //int y=sqrt(n);
    for (int i=2 ; i*i < n ; i++){
        if (n%i==0)return i;
    }
    return -1;
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    int p=prime(a);
	    if (p==-1)cout<<-1<<endl;
	    else{
	        cout<<1<<" "<<p<<" "<<a/p<<endl;
	    }
	}
}
