#include <stdio.h>
#include <string.h>

#define num 20000000

int main(){
	int i, j;
	int mark[2000001];
	memset(mark, 0, sizeof(mark));
	mark[0] = 1;
	mark[1] = 1;
	long number = 0;
	for (i = 2; i * i <= num; ++i){
		if (!mark[i]){
			for (j = 2; j <= num / i; ++j){
				mark[i * j] = 1;
				
			}
		}
	}
	

	for (i = 2; i <= num; ++i){
		if (mark[i] == 0){
			number += mark[i];
		}
		if (number >= 2000000){
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
