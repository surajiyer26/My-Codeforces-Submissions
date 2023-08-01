#include <iostream>
using namespace std;

#define long long int int

int main () {

		int k, n, w;
		cin >> k >> n >> w;
		k *= (w*(w+1))/2;
		k = (k>=n)?(k-n):(0);
		cout << k;

	return 0;
}