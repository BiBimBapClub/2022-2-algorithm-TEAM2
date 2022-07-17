#include<iostream>
#include<vector>
using namespace std;

vector<int> output;
void order(int N, int M);
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	order(N, M);
}
void order(int N, int M) {
	if (M == 0) {
		for (int i = 0; i < output.size(); i++) {
			cout << output[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 1; i <= N; i++) {
		output.push_back(i);
		order(N, M - 1);
		output.pop_back();
	}
}
