#include <iostream>
#include <set>
using namespace std;
int main () {
    
    string s;
    getline (cin,s);
    set <char> k; //set stores unique characters
    for (int i {}; i<s.length(); ++i) {
        if (s[i]!='{' && s[i]!=',' && s[i]!=' ' && s[i]!='}') {
            k.insert(s[i]);
        }
    }
    cout << k.size(); 

    return 0;
}