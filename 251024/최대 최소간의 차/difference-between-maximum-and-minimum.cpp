#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

#define MAX_N 1000
#define MAX_H 100

int main() {
    int n, k;
    int arr[MAX_N];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = INT_MAX;

    // 가능한 모든 구간 [i, i+k] 탐색
    for (int i = 0; i <= MAX_H; i++) {
        int cost = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] < i)
                cost += i - arr[j];          // i보다 작으면 올림
            else if (arr[j] > i + k)
                cost += arr[j] - (i + k);    // i+k보다 크면 깎음
        }
        ans = min(ans, cost);
    }

    cout << ans;
    return 0;
}