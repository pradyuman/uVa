/*Problem 272*/
#import <stdio.h>

int main(){
	int ch;
	int n = 0;
	while((ch = getchar()) !=EOF){
		if(ch == '"'){
			n++;
			printf("%s", n&1?"``":"''");
		} else
			printf("%c", ch);
	}
	return 0;
}
