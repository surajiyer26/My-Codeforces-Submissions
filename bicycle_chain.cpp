#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x;
	cin >> x;
	int arr1 [x];
	for (int i {}; i<x; ++i) 
		cin >> arr1 [i];
	int y;
	cin >> y;
	int maxno {}, maxtimes {};
	for (int j {}; j<y; ++j) {
		int num;
		cin >> num;

		for (int i {}; i<x; ++i) {

			if (num%arr1[i]==0) {
			if ((num/arr1[i])==maxno && ((num/arr1[i])/1)*1==num/arr1[i]) {
				++maxtimes;
			}
			if ((num/arr1[i])>maxno && ((num/arr1[i])/1)*1==num/arr1[i]) {
				maxtimes = 1;
				maxno = num/arr1[i];
			}
		}
		}
	}
	cout << maxtimes;

	return 0;
}