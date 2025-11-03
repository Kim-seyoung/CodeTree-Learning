#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    queue<int> q; vector<int> v;
    int n, k; cin >> n >> k;

    for(int i = 1; i <= n; i++)
        q.push(i);

    while(!q.empty()) {
        for(int i = 1; i < k; i++) {
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front());
        q.pop();
    }

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";   

    return 0;
}