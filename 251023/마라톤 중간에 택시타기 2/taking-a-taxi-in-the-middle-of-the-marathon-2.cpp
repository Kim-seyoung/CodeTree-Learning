#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;
    int x[n], y[n];
    for(int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    int min_dist = INT_MAX;
    for(int i = 1; i < n-1; i++) {
        int dist = 0;
        
        int point[n-1][2]; int k = 0;
        for(int j = 0; j < n-1; j++) {
            if(i == k) k++;
            point[j][0] = x[k];
            point[j][1] = y[k];
            k++;
        }
        
        for(int j = 0; j < n-2; j++) {
            dist += abs(point[j][0] - point[j+1][0]) + abs(point[j][1] - point[j+1][1]);
        }

        //cout << dist << endl;
        min_dist = min(min_dist, dist);
    }
    cout << min_dist;
    return 0;
}