#include <iostream>
#include <cmath>
using namespace std;
int main () {
    
    float x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    float side = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    if (isnan(side)) {
        side = sqrt((side*side)/2);
    }
    int upper_bound = 1001, lower_bound = -1001;
    
    if (x1!=x2 && y1!=y2) {
        int x3=x1, y3=y2, x4=x2, y4=y1;
        if (sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1)) == sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2)))
        cout << x3 << " " << y3 << " " << x4 << " " << y4;
        else
        cout << -1;
    }
    else if (x1!=x2 && y1==y2) {
        if (y1+side<upper_bound) {
            int x3=x1, y3=y1+side, x4=x2, y4=y2+side;
            cout << x3 << " " << y3 << " " << x4 << " " << y4;
        }
        else {
            int x3=x1, y3=y1-side, x4=x2, y4=y2-side;
            cout << x3 << " " << y3 << " " << x4 << " " << y4;
        }
    }
   else if (x1==x2 && y1!=y2) {
       if (x1+side<upper_bound) {
        int x3=x1+side, y3=y1, x4=x2+side, y4=y2;
        cout << x3 << " " << y3 << " " << x4 << " " << y4;
       }
       else {
        int x3=x1-side, y3=y1, x4=x2-side, y4=y2;
        cout << x3 << " " << y3 << " " << x4 << " " << y4;
       } 
    }
    else
        cout << -1;


    return 0;
}