#include <stdio.h>

int main(){
	long sum1, sum2;
	sum1 = 0;
	sum2 = 1;
	for (int i = 1; i <= 100; ++i){
		sum1 += i; 
	}
	sum1 *= sum1;
	sum2 = 100 * 101 * 201 / 6;
	printf("%ld", sum1 - sum2);
	return 0;
}
