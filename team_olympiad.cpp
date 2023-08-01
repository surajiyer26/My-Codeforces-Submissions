#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    
    int n;
    cin >> n;
    vector <pair<int,int>> num;
    int c1 {}, c2 {}, c3 {};
    for (int i {1}; i<=n; ++i) {
        int x;
        cin >> x;
        if (x==1)
            ++c1;
        if (x==2)
            ++c2;
        if (x==3)
            ++c3;
        num.push_back(make_pair(x,i));
    }
    sort (num.begin(), num.end());
    int temp = min(c1,c2);
    int minc = min(temp,c3);
    if (minc==0) {
        cout << 0;
        return 0;
    }
    else
        cout << minc << endl;
    for (int i {}; i<minc; ++i) {
        cout << num[i].second << " ";
        cout << num[i+c1].second << " ";
        cout << num[i+c1+c2].second << endl;
    }

    return 0;
}