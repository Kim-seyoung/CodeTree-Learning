#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Please write your code here.
    deque<int> dq;
    int n; cin >> n; string a[n]; int v;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == "push_front") {
            cin >> v;
            dq.push_front(v);
        } else if(a[i] == "push_back") {
            cin >> v;
            dq.push_back(v);
        } else if(a[i] == "pop_front") {
            cout << dq.front() << endl;
            dq.pop_front();
        } else if(a[i] == "pop_back") {
            cout << dq.back() << endl;
            dq.pop_back();
        } else if(a[i] == "size") {
            cout << dq.size() << endl;
        } else if(a[i] == "empty") {
            cout << dq.empty() << endl;
        } else if(a[i] == "front") {
            cout << dq.front() << endl;
        } else if(a[i] == "back") {
            cout << dq.back() << endl;
        } 
    }
    return 0;
}