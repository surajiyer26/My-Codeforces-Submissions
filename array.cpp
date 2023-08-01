#include <iostream>
#include <vector>
using namespace std;
int main () {
	
	int x;
	cin >> x;
	vector <int> a, b, c;
	while (x--) {
		int y;
		cin >> y;
		if (y<0) a.push_back(y);
		else if (y>0) b.push_back(y);
		else c.push_back(y);
	}
	if (a.size()>0 && a.size()%2==0) {
		c.push_back(a[0]);
		a.erase(a.begin()+0);
	}
	if (b.size()==0 && a.size()>2) {
		b.push_back(a[1]);
		b.push_back(a[0]);
		a.erase(a.begin()+1);
		a.erase(a.begin()+0);
	}

	if (a.size()!=0) {
	cout << a.size() << " ";
	for (auto num: a)
		cout << num << " ";
	cout << endl;
}
	if (b.size()!=0) {
	cout << b.size() << " ";
	for (auto num: b)
		cout << num << " ";
	cout << endl;
}
	if (c.size()!=0) {
	cout << c.size() << " ";
	for (auto num: c)
		cout << num << " ";
	cout << endl;
}



	return 0;
}