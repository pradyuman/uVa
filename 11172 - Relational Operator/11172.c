/*Problem 11172 */
#import <stdio.h>

int main() {
   int num;
   scanf("%d", &num);
	int a, b, i;
	if(num < 15) {
      for(i = 0; i < num; i++){
         scanf("%d %d", &a, &b);
         if (a < 1000000001 && b < 1000000001 && a > -1000000001 && b > -1000000001) {
            if(a == b)
               printf("=\n");
            else
               printf("%c\n",a<b?'<':'>');
         }
      }
	}
	return 0;
}
