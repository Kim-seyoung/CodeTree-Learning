#include <iostream>

#define MAX_N 1000

using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;
    int b[n-1]; int a[n];
    for(int i = 0; i < n-1; i++) {
        cin >> b[i];
    }

    for(int i = 1; i <= 1000; i++) {
        a[0] = i;

        for(int j = 1; j < n; j++) {
            a[j] = b[j-1] - a[j-1];
        }

        bool ans = true;
        bool exist[MAX_N + 1] = {};
        for(int k = 0; k < n; k++) {
            if(a[k] < 1 || a[k] > n) {
                ans = false;
            } else {
                if(exist[a[k]])
                    ans = false;
                exist[a[k]] = true;
            }
        }
        if(ans) {
            for(int i = 0; i < n; i++)
                cout << a[i] << " ";
            return 0;
        }
    }

    return 0;
}