#include <iostream>
using namespace std;
int arr[50];
int main() {
int t,n;
string s;

cin>>t;
while (t--)
{
	int k=1;
	cin>>n;
	for (int i=0;i<n;i++)
	cin>>arr[i];
	cin>>s;
	for (int i=0;i<n;i++)               //1 10 2 9 3 8
	for (int j=i+1;j<n;j++)               // azzfdb    ---yes 
	{
		if (arr[i]==arr[j] && s[i]!=s[j])             //1 2 3 4 1 1 2 
        {        //both condition shoule be ture          // abababb ---no
            k=0;
        }
	}
if (k==1) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}

}