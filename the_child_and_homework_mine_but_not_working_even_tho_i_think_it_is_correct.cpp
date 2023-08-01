#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string remove_underscores (string s) {
    bool value = true;
    while (value) {
        if (s.find('_')==string::npos)
            value = false;
        else (s.erase(s.find('_'),1));
    }
    return s;
}


int main () {
    
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    vector <int> lengths;

    a = remove_underscores(a);
    b = remove_underscores(b);
    c = remove_underscores(c);
    d = remove_underscores(d);
    
    int alength {a.length()-2};
    lengths.push_back(alength);
    int blength {b.length()-2};
    lengths.push_back(blength);
    int clength {c.length()-2};
    lengths.push_back(clength);
    int dlength {d.length()-2};
    lengths.push_back(dlength);

    sort(lengths.begin(), lengths.end());

    if (alength==0 && blength==0 && clength==0 && dlength==0) {
        cout << 'C';
        return 0;
    }
    if (lengths[3]>=lengths[2]*2) {
         if (lengths[3]==alength)
            cout << 'A';
        else if (lengths[3]==blength)
            cout << 'B';
        else if (lengths[3]==clength)
            cout << 'C';
        else if (lengths[3]==dlength)
            cout << 'D';
    }
    else if (lengths[0]<=lengths[1]/2) {
        if (lengths[0]==alength)
            cout << 'A';
        else if (lengths[0]==blength)
            cout << 'B';
        else if (lengths[0]==clength)
            cout << 'C';
        else if (lengths[0]==dlength)
            cout << "D";
    }
    else
        cout << 'C';

   cout << "\nlengths are " << alength << " " << blength << " " << clength << " " << dlength;

    return 0;
}