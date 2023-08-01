#include <iostream>
using namespace std;
int main () {
    
    int x;
    cin >> x;
    int che {}, bis {}, bac {};
    int num [x];
    for (int i {}; i<x; i++) {
        cin >> num [i];
    }
    for (int i {}; i<x; i+=3) {
        che+=num[i];
        if (i+1>=x)
            break;
        bis+=num[i+1];
        if (i+2>=x)
            break;
        bac+=num[i+2];
    }
    if (che>bis && che>bac)
        cout << "chest";
    if (bis>che && bis>bac)
        cout << "biceps";
    if (bac>che && bac>bis)
        cout << "back";

    return 0;
}