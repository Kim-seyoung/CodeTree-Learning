#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[19][19];
    for(int i = 0; i < 19; i++) {
        for(int j = 0; j < 19; j++) 
            cin >> a[i][j];
    }

    int x = -1, y = -1; int win = 0;
    for(int i = 0; i < 19; i++) {
        for(int j = 0; j < 15; j++) {
            if(a[i][j] == 1 && a[i][j+1] == 1 && a[i][j+2] == 1 && a[i][j+3] == 1 && a[i][j+4] == 1) {
                x = i; y = j+2;
                win = 1;
            } 

            if(a[i][j] == 2 && a[i][j+1] == 2 && a[i][j+2] == 2 && a[i][j+3] == 2 && a[i][j+4] == 2) {
                x = i; y = j+2;
                win = 2;
            }     
        }
    }

    for(int i = 0; i < 19; i++) {
        for(int j = 0; j < 15; j++) {
            if(a[j][i] == 1 && a[j+1][i] == 1 && a[j+2][i] == 1 && a[j+3][i] == 1 && a[j+4][i] == 1) {
                x = j+2; y = i;
                win = 1;
            } 

            if(a[j][i] == 2 && a[j+1][i] == 2 && a[j+2][i] == 2 && a[j+3][i] == 2 && a[j+4][i] == 2) {
                x = j+2; y = i;
                win = 2;
            }      
        }
    }

    for(int i = 0; i < 15; i++) {
        for(int j = 0; j < 15; j++) {
            if(a[i][j] == 1 && a[i+1][j+1] == 1 && a[i+2][j+2] == 1 && a[i+3][j+3] == 1 && a[i+4][j+4] == 1) {
                x = i+2; y = j+2;
                win = 1;
            } 

            if(a[i][j] == 2 && a[i+1][j+1] == 2 && a[i+2][j+2] == 2 && a[i+3][j+3] == 2 && a[i+4][j+4] == 2) {
                x = i+2; y = j+2;
                win = 2;
            }  

            if(a[i][j+4] == 1 && a[i+1][j+3] == 1 && a[i+2][j+2] == 1 && a[i+3][j+1] == 1 && a[i+4][j] == 1) {
                x = i+2; y = j+2;
                win = 1;
            } 

            if(a[i][j+4] == 2 && a[i+1][j+3] == 2 && a[i+2][j+2] == 2 && a[i+3][j+1] == 2 && a[i+4][j] == 2) {
                x = i+2; y = j+2;
                win = 2;
            }  
        }
    }
    
    cout << win << endl;
    cout << x+1 << " " << y+1;
    return 0;
}