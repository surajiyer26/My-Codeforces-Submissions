#include <iostream>
#include <string>
using namespace std;
int main () {

	string s;
    cin >> s;
    bool value {true};
    while (value) {
        string space = " ";
        if (s.find("WUB")!=string::npos) {
            s.replace(s.find("WUB"), 3, space);
        }
        else
            value = false;
    }
    cout << s;

	return 0;
}