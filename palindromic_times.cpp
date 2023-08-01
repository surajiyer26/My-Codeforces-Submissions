    #include <iostream>
    #include <string>
    using namespace std;
    int main () {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        string s;
        cin >> s;
        int num1 {s.at(0) - '0'}, num2 {s.at(1) - '0'};
        int num {num1*10 + num2};
        int num3 {s.at(3) - '0'}, num4 {s.at(4) - '0'}; 
        int next {num3*10 + num4};
        if (next>=(num2*10+num1)) ++num;
        if (num==24) {
            num1 = 0;
            num2 = 0;
        }
        else if (num==23 && next>=(num2*10+num1)) {
            num1 = 0;
            num2 = 0;
        }
        else {
            bool value {true};
            while (value) {
               if (num<10) {
                    num1 = 0;
                    num2 = num;
                }
                else {
                    num1 = num/10;
                    num2 = num%10;
                }

                int newnum {num2*10+num1};
                if (newnum<60)
                    value = false;
                ++num;
            }
        }
         
        cout << num1 << num2 << ":" << num2 << num1;

        return 0;
    }