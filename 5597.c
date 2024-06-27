// test
#include <stdio.h>

int main() {
    int check[31];
    int check_log[31];
    for(int i=1; i<= 30; i++) {
        check[i] = i;
    }
    for(int j=0; j<28; j++) {
        scanf("%d", &check_log[j]);
        check[check_log[j]] = 0;
    }
    for(int i=1; i<= 30; i++) {
        if(check[i] != 0)
            printf("%d\n", i);
    }
}