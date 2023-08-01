
#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, sum = 0;
	cin >> n;
	int temp = n;
	while (temp--) {
		int x;
		cin >> x;
		sum += x;
	}
	int count = 0;
	for (int i {1}; i<6; ++i) {
		if ((sum+i)%(n+1)!=1) {
			++count;
		}
	}
	cout << count;


	return 0;
}