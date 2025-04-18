#include<bits/stdc++.h>
using namespace std;
int main()
{int n,m,j,i,k=0,loc;
    cin>>n>>m;
    for(i=n+1;i<=m;i++){
        for(j=2;j<i;j++){
            if(i%j==0)break;}
        if(i==j){break;}
    }if(i==m)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}