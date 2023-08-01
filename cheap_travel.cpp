#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int rem {n%m};
    int ans;
    if (m*a<=b) {
        ans=n*a;
    }
    else {
        ans = (n/m)*b + min((n%m)*a,b);
    }

    cout << ans;

    return 0;
}