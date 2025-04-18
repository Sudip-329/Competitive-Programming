#include<iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)              //1st half contains odd numbers
    {
        cout << k * 2 - 1 << endl;
    }
    else  // 2nd half even numbers
    {
        cout << (k - (n + 1) / 2) * 2 << endl;   //very complecated
    }
    return 0;
}
