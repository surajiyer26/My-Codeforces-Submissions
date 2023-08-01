#include <iostream>
#include <cmath>
using namespace std;
int main () {
    
    int x;
    cin >> x;
    if (x>=0) {
        cout << x;
    }
    else {
        if (x>-10)
            cout << 0;
        else {
            int i {abs(x)%10}; 
            int j {abs(x/10)%10}; 
             if (i>=j) 
                cout << x/10;
             else
                cout << (x/100)*10 - i;
        }
    }
    return 0;
}