#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) 
            cin >> a[i][j];
    }

    int max_cnt1 = -1; int x = -1, y = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n-1; j++) {
            int cnt = 0;
            if(a[i][j-1] == 1) cnt++; 
            if(a[i][j] == 1) cnt++; 
            if(a[i][j+1] == 1) cnt++; 

            if(max_cnt1 <= cnt) {
                max_cnt1 = cnt;
                x = i; y = j;
            }
        }
    }

    a[x][y-1] = 2;
    a[x][y] = 2;
    a[x][y+1] = 2;

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++) 
    //         cout << a[i][j] << " ";
    //     cout << endl;
    // }

    int max_cnt2 = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n-1; j++) {
            if(a[i][j-1] == 2 || a[i][j] == 2 || a[i][j+1] == 2)
                continue;
            
            int cnt = 0;
            if(a[i][j-1] == 1) cnt++; 
            if(a[i][j] == 1) cnt++; 
            if(a[i][j+1] == 1) cnt++; 

            if(max_cnt2 <= cnt) {
                max_cnt2 = cnt;
            }
        }
    }

    cout << max_cnt1 + max_cnt2;
    return 0;
}