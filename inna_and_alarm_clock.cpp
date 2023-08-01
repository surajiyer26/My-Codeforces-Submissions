#include <iostream>
#include <set>
using namespace std;
int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set <int> set1;
    set <int> set2;
    int n;
    cin >> n;
    while (n--) {
        int x, y;
        cin >> x >> y;
        set1.insert(x);
        set2.insert(y);
    }
    if (set1.size()<set2.size())
        cout << set1.size();
    else 
        cout << set2.size();

    return 0;
}