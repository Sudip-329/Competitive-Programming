#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int d,c,s1=0,s2=0,pwc,pc;
        cin>>d>>c;
        int arr[3],brr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
            s1=s1+arr[i];
        }
        for(int i=0;i<3;i++){
            cin>>brr[i];
            s2=s2+brr[i];
        }
        if(s1>=150 && s2>=150){
            pc=s1+s2+c;
            pwc=s1+s2+(2*d);
        }
        else if((s1<150 && s2>=150) || (s1>=150 && s2<150)){
            pc=s1+s2+c+d;
            pwc=s1+s2+(2*d);
        }
        else{
            pwc=s1+s2+(2*d);
            pc=pwc;
            cout<<"NO\n";
            continue;
        }
        if(pwc>pc){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
	// your code goes here
	return 0;
}