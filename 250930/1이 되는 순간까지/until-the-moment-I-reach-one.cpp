#include <iostream>

using namespace std;

int N;

int func(int n) {
    if(n == 1) return 0;

    if(n % 2 == 0) n /= 2;
    else n /= 3;

    return 1 + func(n);
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << func(N);
    return 0;
}