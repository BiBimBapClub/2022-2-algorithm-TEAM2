#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> ninput;
vector<int> oinput;
vector<int> ooutput;
vector<int> result;
void order();
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	int a = 0;
	for (int i = 0; i < N; i++) {
		cin >> a;
		ninput.push_back(a);
	}

	for (int i = 0; i < 4; i++) {
		cin >> a;
		oinput.push_back(a);
	}

	order();
	sort(result.begin(), result.end());
	cout << result.back() << endl;
	cout << result.front();

}
void order() {
	int t = 0;
	for (int i = 0; i < 4; i++) {
		if (oinput[i] != 0) {
			t++;
			ooutput.push_back(i);
			--oinput[i];
			order();
			ooutput.pop_back();
			++oinput[i];
		}
	}
	if (t == 0) {
		int total = ninput[0];
		for (int i = 0; i < ooutput.size(); i++) {
			if (ooutput[i] == 0) {
				total = total + ninput[i + 1];
			}
			else if (ooutput[i] == 1) {
				total = total - ninput[i + 1];

			}
			else if (ooutput[i] == 2) {
				total = total * ninput[i + 1];
			}
			else if (ooutput[i] == 3) {
				total = total / ninput[i + 1];
			}
		}
		result.push_back(total);
	}
}