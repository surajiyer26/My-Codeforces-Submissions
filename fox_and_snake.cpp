#include <iostream>
using namespace std;
int main () {
    
    int n, m;
    cin >> n >> m;
    int time {m};
    for (int i {1}; i<=n; ++i) {
        if (i%2!=0) {
            while (time) {
                cout << "#";
                --time;
            }
            cout << endl;
            time = m;
        }
        if (i%2==0 && i%4!=0) {
            while (time-1) {
                cout << '.';
                --time;
            }
            cout << "#" << endl;
            time = m;
        }
        if (i%2==0 && i%4==0) {
            cout << '#';
            while (time-1) {
                cout << ".";
                --time;
            }
            cout << endl;
            time = m;
        }
    }

    return 0;
}