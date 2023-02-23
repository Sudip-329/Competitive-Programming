#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m;
    cin >> n >> m;
    int array[m+5];
    int arr [m-n+1];
    for(int i = 0 ; i < m ; i++){
        cin >> array[i];
    }

    sort(array , array+m);
    int result = 0;
    int minimum = 1e8;
    for(int i = 0 ; i < ((m-n)+1) ; i++){
        result = abs(array[i] - array[i+n-1]);
        arr[i] = result;
    }

    sort(arr , arr+(m-n+1));
    cout << arr[0] << endl;
    return 0;
}