#include <iostream>

using namespace std;

int n, m;

int gcd(int n, int m) {
    while (m != 0) {
        int temp = n % m;
        n = m;
        m = temp;
    }
    return n;
}

int printNum(int n, int m) {
    int gcdNum = gcd(n, m);
    int result = n*m / gcdNum;
    return result;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    int result = printNum(n, m);
    cout << result;
    return 0;
}