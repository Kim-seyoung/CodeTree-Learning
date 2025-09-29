#include <iostream>

using namespace std;

int n;
int arr[50];

void func(int arr[]) {
    for (int i = 0; i < n; i++) {
        if(arr[i] < 0)
            arr[i] *= -1;
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.

    func(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}