#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <limits.h>
#include <cmath>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;
    int a[2*n];
    for(int i = 0; i < 2*n; i++) 
        cin >> a[i];
    
    int max_value = 0;

    sort(a, a + 2*n);

    // 두 원소의 차이의 최솟값을 최대화하기 위해
    long long min_diff = LLONG_MAX; // 최대값 지정

    for (int i = 0; i < n; i++) {
        min_diff = min(min_diff, static_cast<long long>(a[n + i] - a[i]));
    }

    cout << min_diff << endl;

    return 0;
}