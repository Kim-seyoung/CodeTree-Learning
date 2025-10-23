#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    int min_dist = INT_MAX;

    for(int i = 0; i < n; i++) {
        int dist = 0;
        for(int j = 0; j < n; j++) {
            if(i == j) continue;

            int move;
            if(j > i) move = j - i;
            else {
                move = j + n - i;
            }

            dist += a[j] * move;
        }
        min_dist = min(min_dist, dist);
    }
    cout << min_dist;
    return 0;
}