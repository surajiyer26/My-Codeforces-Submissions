#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    if (s1.length()!=s2.length()) {
        cout << "NO";
        return 0;
    }

    int count {};
    vector <int> num;
    for (int i {}; i<s1.length(); ++i) {
        if (count>2) break;
        if (s1.at(i)!=s2.at(i)) {
           ++count;
           num.push_back(i);
        }

    }

    if (count==1 || count>2) {
        cout << "NO";
        return 0;
    }

    char temp = s1.at(num[0]);
    s1.at(num[0]) = s1.at(num[1]);
    s1.at(num[1]) = temp;

    if (s1==s2)
        cout << "YES";
    else
        cout << "NO";


    return 0;
}