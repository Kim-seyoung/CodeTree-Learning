#include <iostream>

using namespace std;

int N;

void printHelloWorld(int n) {
    if(n == 0)
        return;

    printHelloWorld(n-1);
    cout << "HelloWorld" << endl;
}

int main() {
    cin >> N;

    // Please write your code here.
    printHelloWorld(N);
    return 0;
}