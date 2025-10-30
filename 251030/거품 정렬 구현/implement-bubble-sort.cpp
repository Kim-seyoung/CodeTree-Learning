#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    bool sorted = true;
    do {
        sorted = true;
      
        for(int j = 0; j < n-1; j++) {
            if(a[j] > a[j+1]) {
                sorted = false;
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }    
    } while(!sorted);

    for(int i = 0; i < n; i++) 
        cout << a[i] << " ";

    return 0;
}