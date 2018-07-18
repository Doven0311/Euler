#include <stdio.h>

int f[500] = {0};
int main(){
	f[0] = 2;
	f[1] = 1;
	f[2] = 2;
	while((f[f[0]]) < 4000000){
		f[0]++;
		f[f[0]] = f[f[0] - 1] + f[f[0] - 2];
	}
	int sum = 0;
	for (int i = 2; i < f[0]; i += 3){
		sum += f[i];
	}
	printf("%d\n", sum);
	return 0;
}
