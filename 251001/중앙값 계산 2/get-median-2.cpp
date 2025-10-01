#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100];
int arr_sorted[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        arr_sorted[i] = arr[i];
    }

    for (int i = 1; i <= n; i++) {
        sort(arr_sorted, arr_sorted+i);
        if(i % 2 == 1) {
            cout << arr_sorted[i / 2] << " ";
        }

    }

    return 0;
}