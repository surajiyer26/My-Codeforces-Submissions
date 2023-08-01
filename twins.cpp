#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr [n];
    for (int i {}; i<n; ++i) {
        cin >> arr [i];
    }
    sort (arr, arr+n);
    int sum {};
    for (int i {}; i<n; ++i) {
        sum += arr [i];
    }
    int count {};
    for (int i {n-1}; i>=0; --i) {
        if (arr [i] > (sum - arr [i])) {
            ++count;
            break;
        }
        arr [i-1] += arr [i];
        ++count;
    }
    cout << count;
  
return 0;
}
