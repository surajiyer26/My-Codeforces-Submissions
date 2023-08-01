#include <iostream>
#include <set>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

#define ll long long int
#define ull unsigned long long int
#define M 1000000007

int arr [1000000] {};
set <ull> s;

void tprimes () {
	s.insert(4);
	for (ull i {3}; i<=1000000; i+=2) {
		if (arr[i]==0) {
			s.insert(i*i);
			for (ull j {i}; j<=1000000; j+=i)
				arr[j]=1;	
		}
	}
}

int main () {
	
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ull n;
	cin >> n;
	tprimes();
	while (n--) {
		ull x;
		cin >> x;
		if (s.count(x))
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}