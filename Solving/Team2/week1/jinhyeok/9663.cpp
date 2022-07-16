#include <cstdio>
#include <cstring>
#include <cmath>

int N, ret, state[15];

bool canPut(int r, int c) {
    if(state[c] != -1) return false;
    for(int i = 0; i < N; i++)
        if(state[i] != -1 && abs(c - i) == abs(r - state[i])) return false;
    return true;
}

void count(int r) { // 0 ~ r - 1 까지 퀸을 놓았고 현재 상태가 state일 때, 퀸을 놓을 수 있는 방법의 수 ret에 더하기
    if(r == N) {
        ret++;
        return;
    }
    for(int c = 0; c < N; c++) {
        if(canPut(r, c)) {
            state[c] = r;
            count(r + 1);
            state[c] = -1;
        }
    }
}

int main() {
    scanf("%d", &N);
    memset(state, -1, sizeof(state));
    count(0);
    printf("%d", ret);
}
