#include <iostream>

using namespace std;

int n;
int arr[100];

int max(int n) {
    int max_idx = 0;
    for(int i = 0; i < n; i++) {
        if(arr[max_idx] < arr[i])
            max_idx = i;
    }
    return arr[max_idx];
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    cout << max(n);
    return 0;
}