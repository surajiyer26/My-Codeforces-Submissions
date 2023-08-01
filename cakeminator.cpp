#include <iostream>
using namespace std;
int main () {
    
    int x, y;
    cin >> x >> y;
    char arr [x] [y];
    int dots {}, count {}, empty_vertical {}, empty_horizontal {};
    for (int i {}; i<x; ++i) {
        for (int j {}; j<y; ++j) {
            cin >> arr[i][j];
            if (arr[i][j]=='.')
                ++dots;
        }
        if (dots==y) {
                count+=y;
                ++empty_vertical;
            }
        dots = 0;
    }
    for (int j {}; j<y; ++j) {
        for (int i {}; i<x; ++i) {
            if (arr[i][j]=='.')
                ++dots;
        }
        if (dots==x) {
            count+=x;
            ++empty_horizontal;
        }
        dots = 0;
    }
    int cancel = empty_vertical*empty_horizontal;
    count -= cancel;
    cout << count;

    return 0;
}