#include <iostream>
using namespace std;
int main () {
    freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    char arr [n];
    for (int i {0}; i<n; ++i) {
        cin >> arr [i];
    } 
    int j = n/2;
    for (int i {}; i<n/2; ++i) {
        if (arr[i]=='R' && arr[j]=='L')
            cout << j+1 << " " << i+1 << endl;
        else
            cout << i+1 << " " << j+1 << endl;
        ++j;
    }

    return 0;
}