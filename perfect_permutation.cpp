#include <iostream>
using namespace std;
int main () {
  
  int x;
  cin >> x;
  if (x%2!=0) {
    cout << -1;
    return 0;
  }
  int arr [x];
  for (int i {1}; i<=x; ++i) {
    arr[i-1] = i;
  }
  for (int i {}; i<x; i+=2) {
    int position = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = position;
  }
  for (int i {}; i<x; ++i) {
    cout << arr[i] << " ";
  }

  return 0;
}