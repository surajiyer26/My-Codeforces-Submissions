#include <iostream>
#include <set>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	set <char> c;
	char letter;
	while (cin >> letter) {
		c.insert(letter);
	}
	if (c.size()%2==0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";

	return 0;
}