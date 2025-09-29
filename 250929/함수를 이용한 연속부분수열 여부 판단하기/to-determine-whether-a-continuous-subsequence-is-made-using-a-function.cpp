#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool isFunc(int n1, int n2) {
    bool result;
    for(int i = 0; i < n1-n2+1; i++) {
        result = true;
        for(int j = 0; j < n2; j++) {
            if(a[i+j] != b[j]) {
                result = false;
                break; 
            }
        }
        if(result) break;
    }
    return result;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    // Please write your code here.
    if(isFunc(n1, n2)) cout << "Yes";
    else cout << "No";
    return 0;
}