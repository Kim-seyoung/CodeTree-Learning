#include <iostream>

using namespace std;

int N;

int func(int n) {
    if(n == 1) return 1;
    else if(n == 2) return 2;

    if(n % 2 == 1)
    {
        return n + func(n-2);
    }
    else {
        return n + func(n-2);
    }
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << func(N);
    return 0;
}