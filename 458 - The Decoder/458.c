/*Problem 458 */
#import <stdio.h>

int main(){
	int ch;
	while((ch = getchar()) != EOF){
		printf("%c", (ch==32 || ch=='\n')?ch:ch - 7);
	}
	return 0;
}
