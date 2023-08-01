#include <iostream>
using namespace std;
int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;
    
    if (3*x<=y)
        cout << 0;
    else
        cout << 3*x-y;

    return 0;
}