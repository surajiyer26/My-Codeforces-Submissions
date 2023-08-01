 #include <iostream>
 using namespace std;

 int main () {
     
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     int x, y;
     cin >> x >> y;
     int minus1 {}, plus1 {};
     while (x--) {
         int p;
          cin >> p;
          if (p==1)
         {
             ++plus1;
         } 
         else ++minus1;
     }
     while (y--) {
        int a, b;
        cin >> a >> b;
        int num = b-a+1;
        if (num%2!=0) {
            cout << 0;
        }
        else {
            int temp = num/2;
            if (plus1>=temp && minus1>=temp)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
     }

 
     return 0;
 }
