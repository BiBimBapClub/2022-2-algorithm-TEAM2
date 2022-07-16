#include<iostream>
using namespace std;
int N, m = 1000000001, M = -1000000001;
int a[11];
int d[4];
void rr(int k, int cal) {
	if (k == N) {
		if (cal > M)
			M = cal;
		if (cal < m)
			m = cal;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (d[i] > 0) {
			d[i]--;
			if (i == 0)
				rr(k + 1, cal + a[k]);
			if (i == 1)
				rr(k + 1, cal - a[k]);
			if (i == 2)
				rr(k + 1, cal * a[k]);
			if (i == 3)
				rr(k + 1, cal / a[k]);
			d[i]++;
		}
	}
}
int main() {
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> a[i];
	for (int i = 0; i < 4; i++)
		cin >> d[i];
	int cal = a[0];
	rr(1, cal);
	cout << M << "\n" << m;
}
