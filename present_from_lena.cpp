#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x;
	cin >> x;
	int num = 0;
	for (int k {}; k<=x; ++k) {
		for (int i {}; i<x-num; ++i) 
			cout << "  ";
		for (int i {}; i<num; ++i) 
			cout << i << " ";
		for (int i {num}; i>=0; --i) {
			if (i!=0)
				cout << i << " ";
			else
				cout << i;
		}
		cout << endl;
		++num;
	}
	int num2 = x-1;
	for (int k {}; k<x; ++k) {
		for (int i {}; i<x-num2; ++i) 
			cout << "  ";
		for (int i {}; i<num2; ++i) 
			cout << i << " ";
		for (int i {num2}; i>=0; --i) {
			if (i!=0)
				cout << i << " ";
			else
				cout << i;
		}
		cout << endl;
		--num2;
	}


	return 0;
}