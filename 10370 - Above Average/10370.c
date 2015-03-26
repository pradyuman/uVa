/* Problem 10370 */
#include <stdio.h>

int main() {
	int i, num, students;
	int data[1000];
	int sum = 0;
	float average = 0;
	scanf("%d", &num);
	while(num--){
		scanf("%d", &students);
		sum = 0;
		for(i = 0; i < students; i++) {
			scanf("%d", &data[i]);
			sum += data[i];
		}
		average = (float)sum / students;
		sum = 0;
		for(i = 0; i < students; i++) {
			sum += data[i] > average ? 1 : 0;
		}
		printf("%.3f%%\n",100 * (float)sum / students);
	}
	return 0;
}
