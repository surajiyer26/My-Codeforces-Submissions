#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    
    int s, n;
    cin >> s >> n;
    vector <pair<int,int>> numbers;
    for (int i {}; i<n; ++i) {
        int a, b;
        cin >> a >> b;
        numbers.push_back(make_pair(a,b));
    }
    sort (numbers.begin(), numbers.end());
    bool alive {true};
    for (int i {}; i<n; ++i) {
        if(s>numbers[i].first) {
            s+=numbers[i].second;
        }
        else
            alive = false;
    }
    if (alive)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}