#include <iostream>
using namespace std;
int main () {

	int m;
	cin >> m;
	int n {m*2};
    int arr [n];
    for (int i {}; i<n; ++i)
    	cin >> arr[i];
    int count {};
    for (int i {}; i<n; i+=2) {
    	for (int j {1}; j<n; j+=2) {
    		if (arr[i]==arr[j])
    			++count;
    	}
    }
    cout << count;

	return 0;
}