#include <iostream>
#include <string>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	for (int i {}; i<s.length(); ) {
		if (s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
			i+=3;
		else if (s[i]=='1' && s[i+1]=='4')
			i+=2;
		else if (s[i]=='1')
			++i;
		else {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";

	return 0;
}