#include <iostream>

using namespace std;

int N;

void printRect(int n) {
    int num = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << num++ << " ";
            if(num > 9)
                num = 1;
        }
        cout << endl;
    }
}

int main() {
    cin >> N;

    // Please write your code here.
    printRect(N);
    return 0;
}