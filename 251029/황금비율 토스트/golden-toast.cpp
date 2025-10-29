#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    list<char> l;
    int n, m; cin >> n >> m;
    string bread; cin >> bread;
    char ch; list<char>::iterator it; 
    for(int i = 0; i < bread.length(); i++) {
        l.push_back(bread[i]);
    }
    it = l.end();
    for(int i = 0; i < m; i++) {
        cin >> ch;
        if(ch == 'L') {
            it--;
        } else if(ch == 'R') {
            it++;
        } else if(ch == 'D') {
            l.erase(it);
        } else if(ch == 'P') {
            char a;
            cin >> a;
            l.insert(it, a); 
        }
    }
    for(it = l.begin(); it != l.end(); it++) { 
        cout << *it;     
    } 
    return 0;
}