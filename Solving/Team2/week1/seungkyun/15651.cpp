#include<iostream>
using namespace std;
int N, M;
int a[7];
void rr(int d) {
	if (d == M) {
		for (int i = 0; i < M; i++) {
			cout << a[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 1; i <= N; i++) {
		a[d] = i;
		rr(d + 1);
	}
}
int main() {
	cin >> N >> M;
	rr(0);
}
