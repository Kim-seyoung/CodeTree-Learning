#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n; int s; cin >> n >> s;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int min_diff = 10000;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            int sum = 0;
            for(int k = 0; k < n; k++) {
                if(k == i || k == j) continue;

                sum += a[k];
            }
            min_diff = min(min_diff, abs(sum - s));
        }
    }
    cout << min_diff;
    return 0;
}