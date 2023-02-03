#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	string a, b;
	cin >> a>>b;
	for (int i = 0;i < a.length();i++)   //onlt b length wil check because in question is was said that 
                                         // both string are equal.
	{
		if (a[i] >= 'A' && a[i] <= 'Z')   
			a[i] += 32;                   //making the uppercase to lowercase;
		if (b[i] >= 'A' && b[i] <= 'Z')
			b[i] += 32;                   //making the uppercase to lowercase;
		if (a[i] > b[i]) { cout << "1"; return 0; } //if found it will print 1 and return 0 ends program;
		if (a[i] < b[i]) { cout << "-1";return 0; }//same 
	}
    cout << "0" << endl;  //can not put in the for loop because if 1st character dont satisfy both the if
                          //condition then it will print 0. But we need to check all the character
                          // to satisfy the if condition;
	return 0;
}