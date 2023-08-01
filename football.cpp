#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main () {
	
	vector <string> vec;
	int x;
	cin >> x;
	while (x--) {
		string s;
		cin >> s;
		vec.push_back(s);
	}
	int max {};
	string guy {vec[0]};
	for (auto c: vec) {
		if (count(vec.begin(), vec.end(), c)>max) {
			max = count(vec.begin(), vec.end(), c);
			guy = c;
		}
	}
	cout << guy;

	return 0;
}