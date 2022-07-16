#include<iostream>
using namespace std;
int k;
int a[13];
int dd[6];
void rr(int n, int idx) {
	if (n == 6) {
		for (int i = 0; i < 6; i++)
			cout << dd[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = idx; i < k; i++) {
		dd[n] = a[i];
		rr(n + 1, i + 1);
	}
}
int main() {
	bool ok = false;
	while (true) {
		cin >> k;
		if (k == 0)
			break;
		for (int i = 0; i < k; i++)
			cin >> a[i];
		rr(0,0);
		cout << "\n";
	}
}
