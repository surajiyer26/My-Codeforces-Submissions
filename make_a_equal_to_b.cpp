#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector <int> v1 (n);
		vector <int> v2 (n);
		for (int i {}; i<n; ++i)
			cin >> v1[i];
		for (int i {}; i<n; ++i)
			cin >> v2[i];
		if (v1==v2)
			cout << 0 << "\n";
		else if (n==1)
			cout << 1 << "\n";
		else {
			int ans1 {};
			for (int i {}; i<n; ++i)
				if (v1[i]!=v2[i])
					++ans1;
			sort (v1.begin(),v1.end());
			sort (v2.begin(),v2.end());
			int ans2 {1};
			for (int i {}; i<n; ++i)
				if (v1[i]!=v2[i])
					++ans2;
			(ans1<ans2)?cout<<ans1<<"\n":cout<<ans2<<"\n";
		}
	}

	return 0;
}