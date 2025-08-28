#include<iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int m,n;
        cin>>m>>n;
        char a[m][n];
        int falg =0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>a[i][j];
                if((a[i][j])=='C' || (a[i][j])=='M' || (a[i][j])=='Y')
                {
                    falg =1;
                    break;
                }
            }
        }
        if(falg)
        {
            cout<<"#Color";
        }else{
        cout<<"#Black&White";}
}