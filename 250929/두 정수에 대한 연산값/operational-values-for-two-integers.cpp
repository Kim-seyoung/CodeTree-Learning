#include <iostream>

using namespace std;

int a, b;

void func(int& a, int& b) {
    if(a > b) {
        a += 25;
        b *= 2;
    }
    else {
        b += 25;
        a *= 2;
    }
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    func(a, b);
    cout << a << " " << b;
    return 0;
}