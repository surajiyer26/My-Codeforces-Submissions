#include <iostream>
using namespace std;
int main () {
    
    int x, y;
    cin >> x >> y;
    int arr [x][y];
    bool value = true;
    for (int i {}; i<x; ++i) {
        for (int j {}; j<y; ++j) {
            cin >> arr[i][j];
            if (arr[i][j]==1) {
                if (i==0||i==x-1||j==0||j==y-1) {
                    value = false;
                }
            } 
        }
    }

    if (value)
        cout << 4;
    else
        cout << 2;

    return 0;
}