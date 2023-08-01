#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    
    int x;
    cin >> x;
    int a;
    cin >> a;
    int array [250];
    for (int i {}; i<a; ++i) {
        cin >> array[i];
    }
    int b;
    cin >> b;
    for (int i {a}; i<a+b; ++i) {
        cin >> array[i];
    }
    sort (array, array+(a+b));
    int count {};
    for (int i {}; i<a+b; ++i) {
        if(array[i] != array[i+1]){
            ++count;
        }
    }
    if (x==count)
        cout <<  "I become the guy.";
    else
        cout << "Oh, my keyboard!";


    return 0;
}