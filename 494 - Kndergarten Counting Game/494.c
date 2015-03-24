<<<<<<< HEAD
#include <stdio.h>

int main(){
	char input[1000];
	int i;
	while(fgets(input, 1000, stdin)){
		int count = 0;
		for(i = 0; input[i] != '\0'; i++) {
			if((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')){
				if((input[i+1] < 'a' || input[i+1] > 'z') && (input[i+1] < 'A' || input[i+1] > 'Z'))
					count++;
			}	
		}
		printf("%d\n", count);
	}
	return 0;
>>>>>>> e2433fdfafbcf989c2859ef56089bb63a5e8ae98
}
