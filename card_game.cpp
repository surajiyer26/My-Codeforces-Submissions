#include <iostream>
#include <string>
using namespace std;
int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char trump {};
    cin >> trump;
    string s1, s2;
    cin >> s1 >> s2;

    string rank = "6789TJQKA";
    string suit = "SHDC";

    if (s1.at(1)==trump && s2.at(1)!=trump) {
        cout << "YES";
        return 0;
    }
    if (s1.at(1)!=trump && s2.at(1)==trump) {
        cout << "NO";
        return 0;
    }
    if (rank.find(s1.at(0))>rank.find(s2.at(0)) && s1.at(1)==s2.at(1)) 
        cout << "YES";
    else
        cout << "NO";


    return 0;
}