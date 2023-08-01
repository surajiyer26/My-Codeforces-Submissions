#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    int arr [n];
    for (int i {}; i<n; ++i) 
        cin >> arr [i];
    sort (arr, arr+n, greater<int>());
    int count {}, sum {}, i {};
    if (k>=m) {
        cout << 0;
        return 0;
    }
    else {
        --k;
        while (i<n) {
            sum += arr [i];
            ++count;
            if (m>sum+k) {
                ++i;
                --sum;
                continue;
            }
            else
                break;
        }
    }
    if (m<=sum+k)
        cout << count;
    else
        cout << -1;

    return 0;
}