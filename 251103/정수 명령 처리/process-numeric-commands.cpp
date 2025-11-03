#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n; string a[n]; int v;
    stack<int> s;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == "push") {
            cin >> v;
            s.push(v);
        }
        else if(a[i] == "pop") {
            cout << s.top() << endl;
            s.pop();
        } else if(a[i] == "size") {
            cout << s.size() << endl;
        } else if(a[i] == "empty") {
            cout << s.empty() << endl;
        } else if(a[i] == "top") {
            cout << s.top() << endl;
        }
    }

    return 0;
}