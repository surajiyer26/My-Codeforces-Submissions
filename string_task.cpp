#include <iostream>
#include <string>
using namespace std;
int main () {

    string s;
    cin >> s;
    for (auto c: s) {
        if (c!='A' && c!='O' && c!='Y' && c!='E' && c!='U' && c!='I' &&
            c!='a' && c!='o' && c!='y' && c!='e' && c!='u' && c!='i') {
            cout << "."; 
            putchar (tolower(c));
            }
    }
    
return 0;
}

