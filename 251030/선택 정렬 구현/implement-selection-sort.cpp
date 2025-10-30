#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++)      
        cin >> a[i];

    for(int i = 0; i < n-1; i++) {
        int min = i;
        for(int j = i+1; j < n; j++) {
            if(a[j] < a[min]) 
                min = j;
        }
        int tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}