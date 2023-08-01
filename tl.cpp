#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    
    int n, m;
    cin >> n >> m;

    int arrn [n];
    for (int i {}; i<n; ++i) {
        cin >> arrn[i];
    }

    sort (arrn,arrn+n);
    int max = 2*arrn[0];

    for (int i {}; i<n; ++i) {
        if (max<arrn[i])
            max = arrn[i];
    }

    int arrm [m];
    for (int i {}; i<m; ++i) {
        cin >> arrm[i];
        if (arrm[i]<=max) {
            cout << -1;
            return 0;
        }
    }

    cout << max;

    return 0;
}