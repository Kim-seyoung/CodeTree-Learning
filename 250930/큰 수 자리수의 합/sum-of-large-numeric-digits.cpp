#include <iostream>

using namespace std;

int a, b, c;

int Sum(int n) {
    if(n < 10) return n;
    
    return Sum(n / 10) + n % 10;
}

int func(int a, int b, int c) {
    int num = a*b*c;
    return Sum(num);
}

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    cout << func(a, b, c);
    return 0;
}