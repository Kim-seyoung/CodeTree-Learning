#include <iostream>

using namespace std;

int a, b, c;

int min(int a, int b, int c) {
    int arr[3] = {a, b, c};
    int min = arr[0];
    for(int i = 0; i < 3; i++) {
        if(min > arr[i])
            min = arr[i];
    }
    return min;
}

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    int result = min(a, b, c);
    cout << result;
    return 0;
}