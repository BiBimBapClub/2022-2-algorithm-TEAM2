#include<iostream>
#include<vector>
using namespace std;
long long cnt = 0, N;
vector<int> c, r;
void repeat(int k) {
	c.push_back(k);
	bool ok = true;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < r.size(); j++) {
			if (r.at(j) == i) {
				ok = false;
				break;
			}
			if (k - j - 1 == i - r.at(j)) {
				ok = false;
				break;
			}
			if (k - j - 1 == r.at(j) - i) {
				ok = false;
				break;
			}
		}
		if (ok) {
			r.push_back(i);
			if (r.size() == N) {
				cnt++;
				r.pop_back();
			}
			else {
				repeat(k + 1);
				r.pop_back();
			}
		}
		ok = true;
	}
	c.pop_back();
}
int main() {
	cin >> N;
	c.push_back(1);
	for (int i = 1; i <= N; i++) {
		r.push_back(i);
		repeat(2);
		r.pop_back();
	}
	if (N == 1)
		cout << 1;
	else
		cout << cnt;
}
