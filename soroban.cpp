#include <iostream>
#include <vector>
using namespace std;
int main () {
    
    int x;
    cin >> x;

    if (x==0) {
        cout << "O-|-OOOO";
        return 0;
    }

    while (x) {
        
        vector <char> vec;
        int y = x%10;

        if (y>=5) {
            vec.push_back('-');
            vec.push_back('O');
            vec.push_back('|');
            y-=5;
            vec.push_back('O');
            vec.push_back('O');
            vec.push_back('O');
            vec.push_back('O');
            vec.push_back('O');
            vec.at(y+3)='-';
        } 
        else {
            vec.push_back('O');
            vec.push_back('-');
            vec.push_back('|');
            vec.push_back('O');
            vec.push_back('O');
            vec.push_back('O');
            vec.push_back('O');
            vec.push_back('O');
            vec.at(y+3)='-';
        }
    

    for (auto c: vec) 
        cout << c;

        x/=10;
        cout << endl;
    }

    return 0;
}