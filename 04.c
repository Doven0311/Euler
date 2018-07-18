#include <stdio.h>
#include <stdlib.h>

int check(int32_t a) {
    int b = a, x = 0;
    while (a) {
        x = x * 10 + a % 10;
        a /= 10;
    }
    return b == x;
}

int main(){
    int32_t maxN = 0;
    for (int32_t i = 100; i <= 999; ++i) {
        for (int32_t j = i; j <= 999; ++j) {
            if (check(i * j) && i * j > maxN)
                maxN = i * j;
        }
    }
    printf("%d\n",maxN);
    return 0;
}
