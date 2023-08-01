#include <iostream>
using namespace std;

bool is_prime (int x) {
	for (int i {2}; i<x; ++i) {
		if (x%i==0)
			return false;
	}
	return true;
}

int next_prime (int x) {
	++x;
	while (!is_prime(x)) {
		++x;
	}
	return x;
}

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x, y;
	cin >> x >> y;
	int z = next_prime(x);
	if (z==y)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}