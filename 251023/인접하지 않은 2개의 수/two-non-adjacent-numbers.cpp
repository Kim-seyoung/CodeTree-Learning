#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    
    int max_sum = 0;
    for(int i = 0; i < n-2; i++) {
        for(int j = i+2; j < n; j++) {
            max_sum = max(max_sum, a[i] + a[j]);
        }
    }
    cout << max_sum;
    return 0;
}