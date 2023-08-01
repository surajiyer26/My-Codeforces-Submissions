#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, sumx=0, sumy=0, sumz=0;
	cin >> t;
	while (t--) {
		int x, y ,z;
		cin >> x >> y >> z;
		sumx+=x;
		sumy+=y;
		sumz+=z;
	}
	if (sumx==0 && sumy==0 && sumz==0)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}