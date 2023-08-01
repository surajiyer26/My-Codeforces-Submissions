#include <iostream>
#include <string>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	int count {1};
	for (int i {}; i<s.length()-1; ++i) {
		if (s[i]==s[i+1])
			++count;
		else 
			count = 1;
		if (count==7) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";

	return 0;
}