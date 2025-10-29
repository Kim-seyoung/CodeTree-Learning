#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n; 
    vector<int> v; string com[n]; int value[n] = {};
    for (int i = 0; i < n; i++) {
        cin >> com[i];
        if (com[i] == "push_back" || com[i] == "get")
            cin >> value[i];
    }

    for(int i = 0; i < n; i++) {
        if(com[i] == "push_back") {
            v.push_back(value[i]);
        } else if(com[i] == "pop_back") {
            v.pop_back();
        } else if(com[i] == "size") {
            cout << v.size() << endl;
        } else if(com[i] == "get") {
            cout << v[value[i]-1] << endl;
        }
    }

    return 0;
}