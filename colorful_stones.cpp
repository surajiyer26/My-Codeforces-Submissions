#include <iostream>
#include <string>
using namespace std;
int main () {
    
    string s1;
    string s2;
    cin >> s1 >> s2;

    int count {1};
    for (int i {}; i<s2.length(); ++i) {
        if (s1.at(count-1)==s2.at(i)) {
            ++count;
        }
    }

    cout << count;

    return 0;
}