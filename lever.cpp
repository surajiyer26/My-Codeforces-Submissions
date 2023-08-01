#include <iostream>
#include <string>
using namespace std;
int main () {
    
    string s;
    cin >> s;
    long long rhs {}, lhs {};
    long long pivot = s.find('^') + 1;
    for (long long i {1}; i<=s.length(); ++i) {
        if (s.at(i-1)=='=' || s.at(i-1)=='^')
            continue;
        if (i<pivot) {
            lhs += (s.at(i-1) - '0')*(pivot-i);
        }
        if (i>pivot) {
            rhs += (s.at(i-1) - '0')*(i-pivot);
        }
    }
    if (lhs==rhs)
        cout << "balance";
    else if (lhs>rhs)
        cout << "left";
    else if (rhs>lhs)
        cout << "right";

    return 0;
}