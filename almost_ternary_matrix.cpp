#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <utility>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

#define pb push_back
#define mp make_pair

#define int int_fast64_t
#define M 1000000007

int gcd (int a, int b) {
	if (b==0) 
		return a;
	return gcd(b, a%b);
}

int hcf (int a, int b) {
	return (a*b)/gcd(a,b);
}

int fact (int a) {
	if (a==0)
		return 1;
	else
		return a*fact(a-1);
}

signed main () {
	
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int arr [n] [m];
		for (int i {}; i<n; ++i) {
			for (int j {}; j<m; ++j) {
				arr[i][j]=0;
			}
		}
		bool value = true;
		for (int i {}; i<n; i+=2) {
			bool temp = true;
			for (int j {}; j<m; j+=2) {
				if (value) {
					if (temp) {
						arr[i][j]=1;
						arr[i+1][j+1]=1;
						temp=false;
					}
					else {
						arr[i+1][j]=1;
						arr[i][j+1]=1;
						temp=true;
					}
				}
				else {
					if (temp) {
						arr[i+1][j]=1;
						arr[i][j+1]=1;
						temp=false;
					}
					else {
						arr[i][j]=1;
						arr[i+1][j+1]=1;
						temp=true;
					}
				}
			}
			if (value)
				value = false;
			else
				value = true;
		}
		for (int i {}; i<n; ++i) {
			for (int j {}; j<m; ++j) {
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
	}

	return 0;
}