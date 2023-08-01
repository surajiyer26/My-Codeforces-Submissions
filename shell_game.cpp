#include <iostream>
using namespace std;
int main () {
    freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    int three = 3;
    while (three--) {
        int a, b;
        cin >> a >> b;
        if (a==x)
            x=b;
        else if (b==x)
            x=a;
    }
    cout << x;

    return 0;
}