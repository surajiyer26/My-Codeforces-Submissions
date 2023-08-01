#include <iostream>
#include <cmath>
using namespace std;
int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    int arr [x];
    for (int i {}; i<x; ++i) {
        cin >> arr [i];
    }
    int num1 {1}, num2 {x};
    int diff {abs(arr[0] - arr[x-1])};

    for (int i {}; i<x-1; ++i) {
        if (abs(arr[i]-arr[i+1])<diff) {
            diff = abs(arr[i]-arr[i+1]);
            num1 = i+1;
            num2 = i+2;
        }
    }

    cout << num1 << " " << num2;

    return 0;
}