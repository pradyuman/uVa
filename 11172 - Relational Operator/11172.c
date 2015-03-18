/*Problem 11172 */
#import <stdio.h>

int main(){
   unsigned num;
   unsigned a, b;
   
   scanf("%u", &num);
   while (num--){
      scanf("%u%u", &a, &b);
      printf("%c\n", a > b ? '>' : a < b ? '<' : '=');
   }
	return 0;
}
