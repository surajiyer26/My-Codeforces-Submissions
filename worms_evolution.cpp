#include <iostream>
using namespace std;
int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr [n];
    for (int i {}; i<n; ++i)
        cin >> arr [i];
    bool value = false;
    int num1, num2, num3;
    for (int i {}; i<n; ++i) {
        for (int j {i+1}; j<n; ++j) {
            int sum = arr[i]+arr[j];
            for (int k {0}; k<n; ++k) {
                if (arr[k]==sum) {
                    value = true;
                    num1 = i + 1;
                    num2 = j + 1;
                    num3 = k + 1;
                    break;
                }
            }
        }
    }
    if (value)
        cout << num3 << " " << num2 << " " << num1;
    else
        cout << -1;

    return 0;
}
