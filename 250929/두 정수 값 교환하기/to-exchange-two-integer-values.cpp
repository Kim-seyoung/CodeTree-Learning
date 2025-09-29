#include <iostream>

using namespace std;

int n, m;

void swap(int n, int m) {
    int temp = n;
    n = m;
    m = temp;
    cout << n << " " << m;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    swap(n, m);
    return 0;
}