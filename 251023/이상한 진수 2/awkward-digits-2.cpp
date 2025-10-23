#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main() {
    // Please write your code here.
    string a; cin >> a;

    int ans = INT_MIN;
    for(int i = 0; i < (int) a.size(); i++) {
        a[i] = '0' + '1' - a[i];
        cout << a << endl;
        int num = 0;
        for(int j = 0; j < (int) a.size(); j++) 
            num = num * 2 + (a[j] - '0');

        ans = max(ans, num);

        a[i] = '0' + '1' - a[i];
    }
    cout << ans;

    return 0;
}