#include <iostream>  //ok
#include <vector>
using namespace std;

int find_impostor_index(int n, vector<int>& arr) {
    for (int i = 1; i < n - 1; ++i) {
        if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1]) {
            return i+1;
        }
    }
    if (arr[0] != arr[1]) {
        return 0+1;
    } else if (arr[n - 1] != arr[n - 2]) {
        return n - 1+1;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int index = find_impostor_index(n, arr);
    if (index != -1) {
        cout << index << endl;
    }
    return 0;
}
