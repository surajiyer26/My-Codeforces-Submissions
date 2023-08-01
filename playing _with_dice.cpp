#include <iostream>
#include <cmath>
using namespace std;
int main () {
    
    int a, b;
    cin >> a >> b;
    int p1 {}, draw {}, p2 {};
    for (int i {1}; i<=6; ++i) {
        int adiff {abs(a-i)}, bdiff {abs(b-i)};
        if (adiff==bdiff)
            ++draw;
        else if (adiff<bdiff)
            ++p1;
        else if (bdiff<adiff)
            ++p2;
    }
    cout << p1 << " " << draw << " " << p2; 

    return 0;
}