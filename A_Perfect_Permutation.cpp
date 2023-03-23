//194039440	Feb/18/23 00:55 Sudip_Chakrabarty 233A - Perfect Permutation 30 ms 0 KB
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << "2 1";
        for (int i = 3; i < n; i += 2)
        {
            cout << " " << i + 1 << " " << i;
        }
        cout << endl;
    }
    return 0;
}