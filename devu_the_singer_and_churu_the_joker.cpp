#include <iostream>
using namespace std;
int main () {
    
    int n, d;
    cin >> n >> d;
    int t [n];
    int sum {};
    for (int i {}; i<n; ++i) {
        cin >> t[i];
        sum += t[i];
    }
    if (((n-1)*10)+sum>d) {
        cout << -1;
        return 0;
    }
    int count = {((n-1)*10)/5};
    sum += (n-1)*10;
    count += (d - sum)/5;

    cout << count;

    return 0;
}