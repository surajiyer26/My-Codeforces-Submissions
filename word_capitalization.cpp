#include <iostream>
#include <string>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	s.at(0) = toupper(s.at(0));
	cout << s;

	return 0;
}