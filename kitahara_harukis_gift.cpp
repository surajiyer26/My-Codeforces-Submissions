#include <iostream>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int one {}, two {};
	while (n--) {
		int x;
		cin >> x;
		if (x==100)
			one++;
		else
			two++;
	}
	if ((one!=0 && one%2==0) || (one==0 && two%2==0))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}