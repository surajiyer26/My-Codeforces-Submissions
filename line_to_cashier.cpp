#include <iostream>
using namespace std;
int main () {
    
    int n;
    cin >> n;
    int arr [n];
    for (int i {}; i<n; ++i) {
        cin >> arr [i];
    }
    int min = 2147483646;
    for (int i {}; i<n; ++i) {
        int temp {arr[i]*15};
        while (arr[i]--) {
            int x;
            cin >> x;
            temp += x*5;

        }
        if (temp<min) 
            min = temp;
    }

    cout << min;

    return 0;
}