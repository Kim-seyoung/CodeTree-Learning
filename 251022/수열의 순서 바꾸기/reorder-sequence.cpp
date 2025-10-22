#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;
    int a[n]; 
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int idx = n-2;
    
    while(idx >= 0 && a[idx] < a[idx + 1])
        idx--;

    cout << idx + 1; 
    return 0;
}