#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int input [3][3];
	int output [3][3];
	for (int i {}; i<3; ++i) {
		for (int j {}; j<3; ++j) {
			cin >> input [i][j];
			output [i][j] = 1;
		}
	}

	for (int i {}; i<3; ++i) {
		for (int j {}; j<3; ++j) {
			if (input[i][j]%2==1) {
				if (output[i][j]==1) output[i][j]=0;
				else output[i][j]=1;
				//up
				if (i>0) {
					if (output[i-1][j]==1) output[i-1][j]=0;
					else output[i-1][j]=1;
				}
				//down
				if (i<2) {
					if (output[i+1][j]==1) output[i+1][j]=0;
					else output[i+1][j]=1;
				}
				//right
				if (j<2) {
					if (output[i][j+1]==1) output[i][j+1]=0;
					else output[i][j+1]=1;
				}
				//left
				if (j>0) {
					if (output[i][j-1]==1) output[i][j-1]=0;
					else output[i][j-1]=1;
				}
			}
		}
	}
	
	for (int i {}; i<3; ++i) {
		for (int j {}; j<3; ++j) {
			cout << output[i][j];
		}
		cout << endl;
	}


	return 0;
}