#include <iostream>

using namespace std;

int a, b;

void func(int a, int b) {
    int num = 1;
    for(int i = 1; i <= b; i++) {
        num *= a;
    }
    cout << num;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    func(a, b);

    return 0;
}