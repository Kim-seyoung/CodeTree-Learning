#include <iostream>

using namespace std;

int a, b;

bool func(int num) {
    for(int i = 2; i < num; i++) {
        if(num % i == 0)
            return false;
    }

    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    if(sum % 2 == 0)
        return true;
    else
        return false;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    int cnt = 0;
    for(int i = a; i <= b; i++) {
        if(func(i)) cnt++;
    }
    cout << cnt;
    return 0;
}