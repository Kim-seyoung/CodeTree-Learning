#include <iostream>

using namespace std;

int N;

int Fibonaci(int n) {
    if(n == 1)
        return 1;
    else if(n == 2)
        return 1;

    return Fibonaci(n-2) + Fibonaci(n-1);
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << Fibonaci(N);
    return 0;
}