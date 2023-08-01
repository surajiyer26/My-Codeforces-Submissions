#include <iostream>
using namespace std;
int main () {
  
  int n, k;
  cin >> n >> k;
  int count {};
  while (n--) {
    int x, lucky {}, num;
    cin >> x;
    for (;;) {
      if (x>0) {
        int num = x%10;
        x = x/10;
        if (num==4 || num==7)
          ++lucky;
      }
      else 
        break;
    }
    if (lucky<=k)
      ++count;
    lucky = 0;

  }

  cout << count;

  return 0;
}