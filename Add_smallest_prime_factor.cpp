#include <iostream>
using namespace std;

long long factors(long long num) 
{
    long long i;
    for(i=2; i <= num; i++) 
    {
        if (num % i == 0)
	    {
		    return i;
	    }
    }
    return 0;
}

void solve()
{
    long long a,b;
	cin>>a>>b;
	long long z=factors(a);
	long long sum=a,count=0;
	while(sum<b)
	{
		count++;
	    sum+=z;
		z=factors(sum);
	}
	cout<<count<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	long long t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
