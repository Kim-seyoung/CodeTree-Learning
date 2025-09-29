#include <iostream>

using namespace std;

int N;

int func(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum / 10;
}

int main() {
    cin >> N;

    // Please write your code here.
    int result = func(N);
    cout << result;
    return 0;
}