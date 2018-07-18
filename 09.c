#include <stdio.h>

int main(){
	int a, b;
	for (a = 1; a < 1000; ++a){
		for (b = 1; b < 1000; ++b){
			int c = 1000 - a - b;
			if (a * a + b * b == c * c){
				printf("%d %d %d\n", a, b, c);
			}
		}
	}
	return 0;
}
