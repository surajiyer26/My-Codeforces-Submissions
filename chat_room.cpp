#include <iostream>
#include <string>
using namespace std;
int main () {
    
    string s1, s2 {"hello"};
    cin >> s1;
    int n {};
    for (int i {}; i<s1.length(); ++i) {
        if (s1[i]==s2[n]) {
            ++n;
        }
        if (n==5) {
            break;
        }
    }
    if (n==5)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}