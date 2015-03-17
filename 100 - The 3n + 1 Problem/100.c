/* Problem 100 Solution */
#include <stdio.h>

#define SIZE 1000001

static unsigned int cache[SIZE];

int cycle(register unsigned int n);

int main(){
	unsigned int n, m, ans;
	register unsigned int temp = 0;
	register unsigned int i;
	cache[1] = 1;
	while(scanf("%u %u", &n, &m) == 2){
		unsigned int max = 0;
		for(i = (n<m?n:m); i <= (n<m?m:n); i++){
			ans = cycle(i);
			(max < ans)?(max = ans):max;
		}
		printf("%u %u %u\n", n, m, max);
	}
	return 0;
}

int cycle(register unsigned int n) {
	if (n < SIZE && cache[n])
		return cache[n];
	if(n&1){
		if(n < SIZE){
			cache[n] = 2 + cycle((3*n+1) >> 1);
			return cache[n];
		} else {
			return 2 + cycle((3*n+1) >> 1);
		}
	} else {
		if(n < SIZE){
			cache[n] = 1 + cycle(n >> 1);
			return cache[n];
		} else {
			return 1 + cycle(n >> 1);
		}
	}
}
