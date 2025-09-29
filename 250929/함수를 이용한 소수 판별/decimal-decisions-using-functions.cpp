#include <iostream>

using namespace std;

int a, b;

int func(int a, int b) {
    int sum = 0;
    for(int i = a; i <= b; i++) {
        bool is_prime = true;
        for(int j = 2; j < i; j++) {
            if(i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if(is_prime) sum += i;
    }
    cout << sum;
    return sum;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    int result = func(a, b);
    return 0;
}