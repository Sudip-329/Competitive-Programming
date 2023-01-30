#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int x = 0;
    for (int i = 1; i <= 5; ++i)  // no need to make  a matrix . when get 1 no need to enter remaining
    {                              // values. 
        for (int j = 1; j <= 5; ++j)
        {
            cin >> x;
            if (x == 1)
            {
                cout << abs(i - 3) + abs(j - 3) << endl; // it will take positive values only.
            }
        }
    }
    return 0;
}