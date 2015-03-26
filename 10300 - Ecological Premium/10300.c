/* Problem 10300 */
#include <stdio.h>

int main() {
	int farmers, sum, num, i;
	int a, b, c;
	scanf("%d", &num);
	while(num--) {
		scanf("%d", &farmers);
		sum = 0;
		for(i = 0; i < farmers; i++){
			scanf("%d %d %d", &a, &b, &c);
			sum += a*c;
		}
		printf("%d\n", sum);
	}
	return 0;
}
