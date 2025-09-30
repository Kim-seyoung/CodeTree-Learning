#include <iostream>

using namespace std;

int N;

int func(int n) {
    if(n < 10) return (n % 10)*(n % 10);

    return func(n / 10) + (n % 10)*(n % 10);
}

int main() {
    cin >> N;

    // Please write your code here.
    int result = func(N);
    cout << result;
    return 0;
}