#include <iostream>
#include <algorithm>
using namespace std;

bool Carry(int a, int b, int c) {
    while(1) {
        if((a % 10 + b % 10 + c % 10) >= 10) return true;
        
        a /= 10; b /= 10; c /= 10;
        if(a == 0 && b ==0 && c == 0)
        break;
    }
    return false;
}

int main() {
    // Please write your code here.
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int max_sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(Carry(a[i], a[j], a[k]))
                    continue;
                max_sum = max(max_sum, a[i] + a[j] + a[k]);
            }
        }
    }
    cout << max_sum;
    return 0;
}