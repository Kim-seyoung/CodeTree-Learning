#include <iostream>
#include <list>
using namespace std;

int main() {
    // Please write your code here.
    list<int> l; 
    int n; cin >> n;
    string c[n]; int value[n] = {};
    for(int i = 0; i < n; i++) {
        cin >> c[i];
        if(c[i] == "push_back" || c[i] == "push_front")
            cin >> value[i];
    }

    for(int i = 0; i < n; i++) {
        if (c[i] == "push_front") {
            l.push_front(value[i]);
        }
        else if (c[i] == "push_back") {
            l.push_back(value[i]);
        }
        else if (c[i] == "pop_front") {
            cout << l.front() << endl;
            l.pop_front();
        }
        else if (c[i] == "pop_back") {
            cout << l.back() << endl;
            l.pop_back();
        }
        else if (c[i] == "size") {
            cout << l.size() << endl;
        }
        else if (c[i] == "empty") {
            if (l.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if (c[i] == "front") {
            cout << l.front() << endl;
        }
        else if (c[i] == "back") {
            cout << l.back() << endl;
        }

    }

    return 0;
}