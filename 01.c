#include <stdio.h>

int main() {
    int sum3, sum5, sum15;
    sum3 = (3 + 999) * (999 / 3) / 2;
    sum5 = (5 + 995) * (995 / 5) / 2;
    sum15 = (15 + 990) * (990 / 15) / 2;
    printf("%d\n", sum3 + sum5 - sum15);
    return 0;
}
