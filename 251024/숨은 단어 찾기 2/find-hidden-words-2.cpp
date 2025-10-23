#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m; cin >> n >> m;
    string a[n];
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    
    int cnt = 0;

    // 가로
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m-2; j++) {
            if(a[i][j] == 'L' && a[i][j+1] == 'E' && a[i][j+2] == 'E')
                cnt++; 
            if(a[i][j] == 'E' && a[i][j+1] == 'E' && a[i][j+2] == 'L')
                cnt++;
        }
    }
    
    // 세로
    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n-2; i++) {
            if(a[i][j] == 'L' && a[i+1][j] == 'E' && a[i+2][j] == 'E')
                cnt++; 
            if(a[i][j] == 'E' && a[i+1][j] == 'E' && a[i+2][j] == 'L')
                cnt++;
        }
    }

    // 대각선
    for(int i = 0; i < n-2; i++) {
        for(int j = 0; j < m-2; j++) {
            if(a[i][j] == 'L' && a[i+1][j+1] == 'E' && a[i+2][j+2] == 'E')
                cnt++; 
            if(a[i][j] == 'E' && a[i+1][j+1] == 'E' && a[i+2][j+2] == 'L')
                cnt++;
            if(a[i][j+2] == 'L' && a[i+1][j+1] == 'E' && a[i+2][j] == 'E')
                cnt++; 
            if(a[i][j+2] == 'E' && a[i+1][j+1] == 'E' && a[i+2][j] == 'L')
                cnt++;
        }
    }

    cout << cnt;
    return 0;
}