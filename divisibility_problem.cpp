#include <iostream>
using namespace std;
int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int temp = y;
        if (x<y)
            cout << y-x << endl;
        else if (x%y==0)
            cout << 0 << endl;
        else
            cout << y - x%y << endl;

    }

    return 0;
}