#include <iostream>

using namespace std;

int n, m;

int GetMax(int n, int m) {
    int result;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0 && m % i == 0)
            result = i;
    }
    return result;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    int result;
    result = GetMax(n, m);
    cout << result;
    return 0;
}