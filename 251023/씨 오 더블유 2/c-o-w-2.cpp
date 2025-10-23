#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;
    string a; cin >> a;

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) {
                if(a[i] == 'C' && a[j] == 'O' && a[k] == 'W')
                    cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}