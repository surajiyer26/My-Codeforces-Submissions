#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main () {
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int r1, c1, r2, c2;
  cin >> r1 >> c1 >> r2 >> c2;

  if (r1==r2 || c1==c2)
    cout << 1 << " ";
  else
    cout << 2 << " ";

  if ((r1+c1)%2!=(r2+c2)%2) 
    cout << 0 << " ";
  else if (abs(r2-r1)==abs(c2-c1))
    cout << 1 << " ";
  else 
    cout << 2 << " ";

  cout << max(abs(r1-r2),abs(c1-c2));

  return 0;
}