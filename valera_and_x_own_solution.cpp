#include <iostream>
using namespace std;
int main () {
  
  int x;
  cin >> x;
  char arr [x][x];
  for (int i {}; i<x; ++i) {
    for (int j {}; j<x; ++j) {
      cin >> arr[i][j];
    }
  }
  
  int diagonal {arr[0][0]};
  int other {arr[0][1]};
  
  if (diagonal==other) {
        cout << "NO";
        return 0;
      }

  for (int i {}; i<x; ++i) {
    for (int j {}; j<x; ++j) {
    
      if (i==j || i+j==x-1) {
        if (arr[i][j]!=diagonal) {
          cout << "NO";
          return 0;
        }
      }
      
      else {
        if (arr[i][j]!=other) {
          cout << "NO";
          return 0;
      }
    }
      
    
  }
}
  cout << "YES";

  return 0;
}