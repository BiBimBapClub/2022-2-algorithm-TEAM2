#include<iostream>
#include<vector>
using namespace std;

vector<int> input;
vector<int> output;
void order(int h, int k, int m);
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int k;
	cin >> k;

	while (k != 0) {
		int a = 0;
		for (int i = 0; i < k; i++) {
			cin >> a;
			input.push_back(a);
		}
		order(0, k, 6);

		cin >> k;
		input.clear();
		cout << "\n";
	}

}
void order(int h, int k, int m) {
	if (m == 0) {
		for (int i = 0; i < output.size(); i++) {
			cout << output[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = h; i < k; i++) {
		output.push_back(input[i]);
		order(i + 1, k, m - 1);
		output.pop_back();
	}
}
