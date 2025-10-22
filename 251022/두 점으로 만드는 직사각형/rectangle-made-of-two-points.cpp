#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    int a1, b1, a2, b2; cin >> a1 >> b1 >> a2 >> b2;

    int start_x1; 
    int start_y1; 
    int start_x2; 
    int start_y2;

    if(x1 < a1)
        start_x1 = x1;
    else 
        start_x1 = a1;

    if(x2 < a2)
        start_x2 = a2;
    else 
        start_x2 = x2;

    if(y1 < b1)
        start_y1 = y1;
    else 
        start_y1 = b1;
    
    if(y2 < b2)
        start_y2 = b2;
    else 
        start_y2 = y2;
    
    cout << (start_x2 - start_x1) * (start_y2 - start_y1);

    return 0;
}