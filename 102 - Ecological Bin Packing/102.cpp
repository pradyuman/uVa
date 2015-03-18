/* Problem 102 */
#import <cstdio>
#import <cstring>
#define INT_MAX 2147483647

int data[12];

int count(int a, int b, int c);

struct combination {
	char order[5];
	int movement;
};

int main(){
	int i;
	struct combination result[6];
	strcpy(result[0].order, "BCG");
	strcpy(result[1].order, "BGC");
	strcpy(result[2].order, "CBG");
	strcpy(result[3].order, "CGB");
	strcpy(result[4].order, "GBC");
	strcpy(result[5].order, "GCB");

	while(scanf("%d", &data[0]) != EOF){
		/*Brown is 0,3,6
		 *Green is 1,4,7
		 *Clear is 2,5,8*/
		for(i = 1; i < 9; i++)
			scanf("%d", &data[i]);

		result[0].movement = count(0,5,7);
		result[1].movement = count(0,4,8);
		result[2].movement = count(2,3,7);
		result[3].movement = count(2,4,6);
		result[4].movement = count(1,3,8);
		result[5].movement = count(1,5,6);
		int min = INT_MAX;
		int index;
		for(i = 0; i < 6; i++){
			if(result[i].movement< min){
				min = result[i].movement;
				index = i;
			}
		}

		printf("%s %d\n", result[index].order, result[index].movement);
	}
	return 0;
}

int count(int a, int b, int c) {
	int movement = 0;
	for(int i = 0; i < 9; i++)
		movement += (i != a && i != b && i != c)?data[i]:0;
	return movement;
}
