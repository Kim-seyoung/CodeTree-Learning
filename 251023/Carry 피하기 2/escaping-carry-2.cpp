#include <iostream>
#include <algorithm>
using namespace std;

bool Carry(int a, int b, int c) {
    //일의 자리에서 carry가 발생하는 경우
    if(a % 10 + b % 10 + c % 10 >= 10)
        return true;
    
    //십의 자리에서 carry가 발생하는 경우
    if(a % 100 / 10 + b % 100 / 10 + c % 100 / 10 >= 10)
        return true;
    
    //백의 자리에서 carry가 발생하는 경우
    if(a % 1000 / 100 + b % 1000 / 100 + c % 1000 / 100 >= 10)
        return true;
    
    //천의 자리에서 carry가 발생하는 경우
    if(a % 10000 / 1000 + b % 10000 / 1000 + c % 10000 / 1000 >= 10)
        return true;
    return false;
}

int main() {
    // Please write your code here.
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int max_sum = -1;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) {
                if(Carry(a[i], a[j], a[k]))
                    continue;
                else
                    max_sum = max(max_sum, a[i] + a[j] + a[k]);
            }
        }
    }
    cout << max_sum;
    return 0;
}