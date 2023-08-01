#include <iostream>
using namespace std;
int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    char arr [x];
    for (int i {}; i<x; ++i) 
        cin >> arr [i];

    int initial{}, final{}, i{};

    while (!(initial && final)) {
        if (arr[i]=='.')
            ++i;
        else if (arr[i]=='R') {
            initial = i+1;
            ++i;
            while (i<x) {
            if (arr[i]=='L') {
                final = i;
                cout << initial << " " << final;
                return 0;
            }
            else if (arr[i]=='.') {
                final = i+1;
                cout << initial << " " << final;
                return 0;
            }
            else 
                ++i;
        }

        }
        else {
            final = i;
            ++i;
            while (i<x) {
            if (arr[i]=='R') {
                final = i+1;
                cout << initial << " " << final;
                return 0;
                            }
            else if (arr[i]=='.') {
                initial = i;
                cout << initial << " " << final;
                return 0;
            }
            else 
                ++i; 
        }
    }
    }
    cout << initial << " " << final;


    return 0;
}