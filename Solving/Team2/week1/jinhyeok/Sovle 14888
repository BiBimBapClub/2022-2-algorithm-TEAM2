#include <cstdio>
#include <algorithm>
using namespace std;

int N, A[11], oper[4], max_, min_;

int calc(int a, int b, int i) {
    if(i == 0) return a + b;
    else if(i == 1) return a - b;
    else if(i == 2) return a * b;
    else return a / b;
}

void solve(int ret, int i) { // 지금까지 계산한 결과가 ret일 때 Ai부터 고려하여 최대와 최소 계산.
    if(i == N) {
        max_ = max(max_, ret);
        min_ = min(min_, ret);
        return;
    }
    for(int j = 0; j < 4; j++)
        if(oper[j]) {
            oper[j]--;
            solve(calc(ret, A[i], j), i + 1);
            oper[j]++;
        }
}

int main() {
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
        scanf("%d", &A[i]);
    for(int i = 0; i < 4; i++)
        scanf("%d", &oper[i]);
    max_ = -2000000000;
    min_ = 2000000000;
    solve(A[0], 1);
    printf("%d\n%d", max_, min_);
}
