#include <iostream>
using namespace std;
int main () {
    
    int n;
    cin >> n;
    int even {}, odd {};
    int numbers [n];
    for (int i {}; i<n; ++i) {
        cin >> numbers[i];
        if (numbers[i]%2==0)
            ++even;
        else
            ++odd;
    }
    if (even==1) {
        for (int i {}; i<n; ++i) {
            if (numbers[i]%2==0) {
                cout << i+1;
                break;
            }
        }
    }
     if (odd==1) {
        for (int i {}; i<n; ++i) {
            if (numbers[i]%2!=0) {
                cout << i+1;
                break;
            }
        }
    }

    return 0;
}