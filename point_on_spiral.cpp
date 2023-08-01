#include <iostream>
using namespace std;
int main () {
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x, y;
  cin >> x >> y;

  if (x==0 && y==0)
    cout << 0;

  else if (-x + 1 < y && y <= x)
    cout << 1 + (x-1)*4;

  else if (-y <= x && x < y)
    cout << 2 + (y-1)*4;

  else if (x <= y && y < -x)
    cout << 3 + (-x-1)*4;

  else
    cout << 4 + (-y-1)*4;

  return 0;
}