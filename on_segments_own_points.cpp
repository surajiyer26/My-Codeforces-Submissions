#include <iostream>
using namespace std;
int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool used [100] {false};
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;
    n-=1;
    while (n--) {
        int x1, y1;
        cin >> x1 >> y1;
        for (int i {x1}; i<y1; ++i)
            used[i] = true;
    }
    int result {};
    for (int i {x}; i<y; ++i) {
        if (!used[i])
            ++result;
    }
    cout << result;

    return 0;
}