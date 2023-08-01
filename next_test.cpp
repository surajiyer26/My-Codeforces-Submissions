#include <iostream>
#include <algorithm>
using namespace std;
int main () {
  
  int n;
  cin >> n;
  int arr [n];
  for (int i {}; i<n; ++i) 
    cin >> arr [i];
  sort (arr,arr+n);
  for (int i {1}; i<=n; ++i) {
    if (arr[i-1]!=i) {
      cout << i;
      return 0;
    }
  }
  cout << arr[n-1] + 1;

  return 0;
}