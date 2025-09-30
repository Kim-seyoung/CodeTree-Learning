#include <iostream>

using namespace std;

int N;

void printNumber(int n) {
    if(n == 0) return;

    printNumber(n-1);
    cout << n << " ";
}

void printNumberReverse(int n) {
    if(n == 0) return;
    
    cout << n << " ";
    printNumberReverse(n-1);
}

int main() {
    cin >> N;

    // Please write your code here.
    printNumber(N);
    cout << endl;
    printNumberReverse(N);
    return 0;
}