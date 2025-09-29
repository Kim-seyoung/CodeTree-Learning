#include <iostream>

using namespace std;

int n, m;
int A[100];

int func() {
    int sum = 0;
    while(true) {
        sum += A[m-1];
        if(m % 2 == 1) m -= 1;
        else m /= 2;

        if(m == 1) 
        {
            sum += A[m-1];
            break;
        }
    }
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int result = func();
    cout << result;
    return 0;
}