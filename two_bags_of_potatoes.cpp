#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    
    int y, k, n;
    cin >> y >> k >> n;
    vector <int> values;
    int x {n-y-(n%k)};
    while (x>0) {
        if ((x+y)%k==0) {
            values.push_back(x);
            x-=k;
        }
        else
            --x;
    }
    sort(values.begin(), values.end());
    if (values.size()==0)
        cout << -1;
    else {
        for (auto c: values)
            cout << c << " ";
    }

    return 0;
}