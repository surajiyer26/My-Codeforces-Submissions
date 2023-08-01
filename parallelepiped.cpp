#include <iostream>
#include <cmath>
using namespace std;
int main () {
	
	long long ab, bc, ac;
	cin >> ab >> bc >> ac;
	long long product = ab*bc*ac;
	long long abc = sqrt(product);
	long long a = abc/bc;
	long long b = abc/ac;
	long long c = abc/ab;
	long long answer = 4*(a+b+c);
	cout << answer;


	return 0;
}