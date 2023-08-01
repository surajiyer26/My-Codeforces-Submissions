#include <iostream>
using namespace std;
int main () {
  
    int n, x;
    cin >> n >> x;
    int count {1}, time {0};
    while (n--) { 
      int a, b;
      cin >> a >> b;
      count += x*((a-count)/x);
      time += b - count + 1;
      count = b + 1;
    }
    cout << time;

  return 0;
}