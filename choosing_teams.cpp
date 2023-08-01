#include <iostream>
using namespace std;
int main () {
    
    int m, k;
    cin >> m >> k;
    int numbers [m];
    int cap = 5-k;
    int count {};
    for (int i {}; i<m; ++i) {
        cin >> numbers[i];
        if (numbers[i]<=cap)
            ++count;
    }
    if (count<3)
        cout << 0;
    else 
       cout << count/3;

    return 0;
}