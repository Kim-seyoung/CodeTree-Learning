#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n; deque<int> dp;
    for(int i = 0; i < n; i++) 
        dp.push_back(i+1);

    while(dp.size() != 1) {
        dp.pop_front();
        dp.push_back(dp.front());
        dp.pop_front();
    }

    cout << dp.front();

    return 0;
}