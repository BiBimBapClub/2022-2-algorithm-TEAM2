#include <cstdio>
#include <algorithm>
using namespace std;

int k, S[12];
int chosen[6];

void print(int cnt, int bef) { // 지금까지 고른 수가 cnt개이고, 이전에 고른 수 인덱스가 bef일 때, 나머지 모두 선택해 출력
    if(cnt == 6) {
        for(int i = 0; i < 6; i++)
            printf("%d ", S[chosen[i]]);
        printf("\n");
        return;
    }
    for(int here = bef + 1; here < k; here++) {
        chosen[cnt] = here;
        print(cnt + 1, here);
    }
}

int main() {
    while(true) {
        scanf("%d", &k);
        if(k == 0) break;
        for(int i = 0; i < k; i++)
            scanf("%d", &S[i]);
        sort(S, S + k);
        print(0, -1);
        printf("\n");
    }
}
