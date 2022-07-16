#include <cstdio>

char ret[15] = "              ";
int N, M;

void print(int cnt) { // 현재 cnt개 수를 골랐고, ret에 저장되어 있을 때 나머지를 골라 출력
    if(cnt == M) {
        printf("%s\n", ret);
        return;
    }
    for(int here = 1; here <= N; here++) {
        ret[cnt * 2] = '0' + here;
        print(cnt + 1);
    }
}

int main() {
    scanf("%d %d", &N, &M);
    ret[2 * M - 1] = 0;
    print(0);
}
