#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x;
	cin >> x;
	int arr [x];
	int min = 1000000001;
	int position;
	for (int i {}; i<x; ++i) {
		cin >> arr [i];
		if (arr[i]<min) {
			min = arr[i];
			position = i+1;
		}
	}
	int count {};
	for (int i {}; i<x; ++i) {
		if (arr[i]==min) 
			++count;
	}

	if (count==1)
		cout << position;
	else 
		cout << "Still Rozdil";



	return 0;
}