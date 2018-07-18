#include <stdio.h>
#include <stdlib.h>

#define MAX_RANGE 2000000

int prime[MAX_RANGE + 5] = {0};

int main() {

    long sum = 0;

    for (int i = 2; i <= MAX_RANGE; ++i) {

        if (!prime[i]) { prime[++prime[0]] = i; sum += i; }

        for (int j = 1; j <= prime[0] && prime[j] * i <= MAX_RANGE; ++j) {

            prime[i * prime[j]] = 1;

            if (i % prime[j] == 0) break;

        }

    }
	for (int i = 1; i <= MAX_RANGE; i++){
		if (!prime[i] || prime[i] == 1) break;
		printf("%d\n", prime[i]);
	}
    return 0;

}
