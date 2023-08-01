#include <iostream>
using namespace std;
int main () {
    
    int n, m;
    cin >> n >> m;
    int count {};
    
    if (n>2 && n%2==0) {
        count += n/2;
    }
    else {
        count += n/2 + 1;
    }

    for (;;) {
        if (n<m) {
            cout << -1;
            break;
        }

        if (count%m==0) {
            cout << count;
            break;
        }
        else {
            ++count;
        }
            }


    return 0;
}