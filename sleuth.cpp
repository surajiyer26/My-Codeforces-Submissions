#include <iostream>
#include <string>
using namespace std;
int main () {
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  getline (cin,s);
  int last = s.length() - 1;

  while (s.at(last)==' ' || s.at(last)=='?') last--;

  if (s.at(last)=='a' || s.at(last)=='e' || s.at(last)== 'i'
    || s.at(last)=='o' || s.at(last)=='u' || s.at(last)=='y'
    || s.at(last)=='A' || s.at(last)=='E' || s.at(last)== 'I'
    || s.at(last)=='O' || s.at(last)=='U' || s.at(last)=='Y')
    cout << "YES";
  else
    cout << "NO";

  return 0;
}