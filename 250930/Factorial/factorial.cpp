#include <iostream>

using namespace std;

int N;

int Factorial(int n) {
    if(n == 0 || n == 1) return 1;

    return Factorial(n-1) * n;
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << Factorial(N);
    return 0;
}