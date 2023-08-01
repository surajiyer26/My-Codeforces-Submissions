#include <iostream>
using namespace std;
int main () {
    
    int n;
    cin >> n;
    int arr [n];
    for (int i {}; i<n; ++i) 
        cin >> arr [i];
    int position;
    int arr2 [n];
    for (int i {1}; i<=n; ++i) {
        position = arr [i-1];
        arr2 [position-1] = i;
    }
    for (int j {}; j<n; ++j)
        cout << arr2 [j] << " ";
        
    return 0;
}