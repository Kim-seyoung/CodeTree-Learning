#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;
    int x1[n], x2[n];
    for(int i = 0; i < n; i++)
        cin >> x1[i] >> x2[i];

    int min_dist = 100;

    for(int i = 0; i < n; i++) {
        int start_x = 100;
        int end_x = 0;
        for(int j = 0; j < n; j++) {
            if(i == j) continue;

            start_x = min(start_x, x1[j]);
            end_x = max(end_x, x2[j]);
        }
        min_dist = min(min_dist, end_x-start_x);
    }
    cout << min_dist;
    return 0;
}