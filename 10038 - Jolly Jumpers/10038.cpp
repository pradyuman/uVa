/* Problem 10038 */
#include <cstdio>
#include <algorithm>

using namespace std;

int i, n;
int input[3000];
int sorted[3000];

/* Function declaration */
void jolly(void);

int main() {
	while(scanf("%d ", &n) == 1){
		for(i = 0; i < n; i++){
			scanf("%d", &input[i]);
		}
		jolly();
	}
}

void jolly(void) {
	for(i = 1; i < n; i++){
		sorted[i - 1] = input[i] - input[i-1] >= 0 ? input[i] - input[i-1] : input[i-1] - input[i];
	}
	sort(sorted, sorted + n - 1);
	for(i = 1; i < n; i++){
		if(sorted[i - 1] != i){
			printf("Not jolly\n");
			return;
		}
	}
	printf("Jolly\n");
	return;
}
