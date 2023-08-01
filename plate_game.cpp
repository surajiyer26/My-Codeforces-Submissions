#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b, r;
    cin >> a >> b >> r;
    if (2*r>min(a,b))
        cout << "Second";
    else
        cout << "First";

    return 0;
}