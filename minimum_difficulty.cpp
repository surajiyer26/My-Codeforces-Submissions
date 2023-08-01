#include <iostream>
#include <vector>
using namespace std;
int main () {
    
    int n;
    cin >> n;
    vector <int> arr;
    for (int i {}; i<n; ++i) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int diff {arr[2]-arr[0]};
    int guy {1};
    for (int i {1}; i<n-1; ++i) {
        if (diff>arr[i+1]-arr[i-1]) {
            diff = arr[i+1]-arr[i-1];
            guy = i;
        }
    }
    arr.erase(arr.begin()+guy);
    int difficulty {0};
    for (int i {0}; i<n-2; ++i) {
        if (difficulty<arr[i+1]-arr[i])
            difficulty = arr[i+1]-arr[i];
    }
    cout << difficulty;

    return 0;
}