#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Please write your code here.
    queue<int> q;
    int n; cin >> n; string a[n]; int v;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == "push") {
            cin >> v;
            q.push(v);
        } else if(a[i] == "pop") {
            cout << q.front() << endl;
            q.pop();
        } else if(a[i] == "size") {
            cout << q.size() << endl;
        } else if(a[i] == "empty") {
            cout << q.empty() << endl;
        } else if(a[i] == "front") {
            cout << q.front() << endl;
        }
    }
    return 0;
}