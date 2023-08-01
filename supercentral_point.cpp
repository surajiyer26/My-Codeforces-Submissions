#include <iostream>
#include <vector>
using namespace std;
int main () {
  
  int n;
  cin >> n;
  vector <pair<int,int>> vec;
  for (int i {}; i<n; ++i) {
    int x, y;
    cin >> x >> y;
    vec.push_back(make_pair(x,y));
  }
  int count {};
  for (int i {}; i<n; ++i) {
    int right{}, left{}, lower{}, upper{};
    for (int j {}; j<n; ++j) {
    if (vec[i].first>vec[j].first && vec[i].second==vec[j].second)
      ++right;
    if (vec[i].first<vec[j].first && vec[i].second==vec[j].second)
      ++left;
    if (vec[i].first==vec[j].first && vec[i].second<vec[j].second)
      ++lower;
    if (vec[i].first==vec[j].first && vec[i].second>vec[j].second)
      ++upper;
  }
  if (right!=0 && left!=0 && lower!=0 && upper!=0)
      ++count;
}
    cout << count;

  return 0;
}