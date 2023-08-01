#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = 0, i = 0, e = 0, t = 0;
    for (int j {}; j<s.length(); ++j) {
        if (s[j]=='n')
            ++n;
        if (s[j]=='i')
            ++i;
        if (s[j]=='e')
            ++e;
        if (s[j]=='t')
            ++t;
    }
    if (n<3 || i<1 || e<3 || t<1) {
        cout << 0;
        return 0;
    }
    n=((n-3)/2)+1;
    i/=1;
    e/=3;
    t/=1;

    int a = min(n,i);
    int b = min(a,e);
    int c = min(b,t);
    cout << c;

    return 0;
}